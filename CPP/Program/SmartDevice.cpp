#pragma once
#include <iostream>
#include <string>
using namespace std;

class SmartDevice {
private:
    bool wifiEnabled;       // Status koneksi WiFi
    string networkName;     // Nama jaringan yang terhubung
    
public:
    // Constructor
    SmartDevice(bool wifiEnabled = false, string networkName = "") {
        this->wifiEnabled = wifiEnabled;
        this->networkName = networkName;
    }
    
    // Setter
    void setWifiEnabled(bool wifiEnabled) { this->wifiEnabled = wifiEnabled; }
    void setNetworkName(string networkName) { this->networkName = networkName; }
    
    // Getter
    bool getWifiEnabled() { return wifiEnabled; }
    string getNetworkName() { return networkName; }
    
    // Tampilkan Info
    void tampilkanInfoSmart() {
        cout << "Wifi: " << (wifiEnabled ? "Aktif" : "Nonaktif") << " | Jaringan: " << (networkName.empty() ? "Tidak terhubung" : networkName);
    }

    // Destructor
    ~SmartDevice() {}
};