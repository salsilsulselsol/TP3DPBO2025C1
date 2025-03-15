#pragma once
#include "KomponenInternal.cpp"
using namespace std;

class RAM : public KomponenInternal {
private:
    int kapasitasGB;
    string tipe;

public:
    // Constructor
    RAM(string merk = "", string nama = "", int harga = 0, 
        string jenisSlot = "", bool terpasang = false,
        int kapasitasGB = 0, string tipe = "")
        : KomponenInternal(merk, nama, harga, jenisSlot, terpasang) {
        this->kapasitasGB = kapasitasGB;
        this->tipe = tipe;
    }

    // Setter
    void setKapasitasGB(int kapasitasGB) { this->kapasitasGB = kapasitasGB; }
    void setTipe(string tipe) { this->tipe = tipe; }

    // Getter
    int getKapasitasGB() { return kapasitasGB; }
    string getTipe() { return tipe; }

    // Tampilkan Info
    void tampilkanInfo() {
        KomponenInternal::tampilkanInfo();
        cout << " | Kapasitas: " << kapasitasGB << " GB | Tipe: " << tipe;
    }

    // Destructor
    ~RAM() {}
};