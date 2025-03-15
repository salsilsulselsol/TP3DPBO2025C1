#pragma once
#include "Speaker.cpp"
#include "SmartDevice.cpp"
using namespace std;

class SmartSpeaker : public Speaker, public SmartDevice {
private:
    string asisten;  // Nama asisten virtual (Google Assistant, Alexa, dsb)
    
public:
    // Constructor
    SmartSpeaker(string merk = "", string nama = "", int harga = 0, 
                string jenisKoneksi = "", bool terhubung = false,
                int dayaOutput = 0, bool stereo = true,
                bool wifiEnabled = false, string networkName = "",
                string asisten = "")
        : Speaker(merk, nama, harga, jenisKoneksi, terhubung, dayaOutput, stereo),
          SmartDevice(wifiEnabled, networkName) {
        this->asisten = asisten;
    }
    
    // Setter
    void setAsisten(string asisten) { this->asisten = asisten; }
    
    // Getter
    string getAsisten() { return asisten; }
    
    // Tampilkan Info
    void tampilkanInfo() {
        Speaker::tampilkanInfo();
        cout << " | ";
        SmartDevice::tampilkanInfoSmart();
        cout << " | Asisten: " << (asisten.empty() ? "Tidak ada" : asisten);
    }
    
    // Destructor
    ~SmartSpeaker() {}
};