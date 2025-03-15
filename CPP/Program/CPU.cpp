#pragma once
#include "KomponenInternal.cpp"
using namespace std;

class CPU : public KomponenInternal {
private:
    int jumlahCore;         // Berapa core cpu-nya
    float kecepatanGHz;     // Seberapa cepat cpu-nya (dalam GHz)

public:
    // Constructor
    CPU(string merk = "", string nama = "", int harga = 0, 
        string jenisSlot = "", bool terpasang = false,
        int jumlahCore = 0, float kecepatanGHz = 0.0)
        : KomponenInternal(merk, nama, harga, jenisSlot, terpasang) {
        this->jumlahCore = jumlahCore;
        this->kecepatanGHz = kecepatanGHz;
    }

    // Setter
    void setJumlahCore(int jumlahCore) { this->jumlahCore = jumlahCore; }
    void setKecepatanGHz(float kecepatanGHz) { this->kecepatanGHz = kecepatanGHz; }

    // Getter
    int getJumlahCore() { return jumlahCore; }
    float getKecepatanGHz() { return kecepatanGHz; }

    // Tampilkan Info
    void tampilkanInfo() {
        KomponenInternal::tampilkanInfo();
        cout << " | Core: " << jumlahCore << " | Kecepatan: " << kecepatanGHz << " GHz";
    }

    // Destructor
    ~CPU() {}
};