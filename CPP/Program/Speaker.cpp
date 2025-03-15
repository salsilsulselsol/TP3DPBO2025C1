#pragma once
#include "KomponenEksternal.cpp"
using namespace std;

class Speaker : public KomponenEksternal {
private:
    int dayaOutput;
    bool stereo;

public:
    // Constructor
    Speaker(string merk = "", string nama = "", int harga = 0, 
            string jenisKoneksi = "", bool terhubung = false,
            int dayaOutput = 0, bool stereo = true)
        : KomponenEksternal(merk, nama, harga, jenisKoneksi, terhubung) {
        this->dayaOutput = dayaOutput;
        this->stereo = stereo;
    }

    // Setter
    void setDayaOutput(int dayaOutput) { this->dayaOutput = dayaOutput; }
    void setStereo(bool stereo) { this->stereo = stereo; }

    // Getter
    int getDayaOutput() { return dayaOutput; }
    bool getStereo() { return stereo; }

    // Tampilkan Info
    void tampilkanInfo() {
        KomponenEksternal::tampilkanInfo();
        cout << " | Daya Output: " << dayaOutput << " | Stereo: " << (stereo ? "Ya" : "Tidak");
    }

    // Destructor
    ~Speaker() {}
};