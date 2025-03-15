#pragma once
#include "Komponen.cpp"
using namespace std;

class KomponenInternal : public Komponen {
private:
    string jenisSlot;
    bool terpasang;

public:
    // Constructor
    KomponenInternal(string merk = "", string nama = "", int harga = 0, 
                    string jenisSlot = "", bool terpasang = false)
        : Komponen(merk, nama, harga) {
        this->jenisSlot = jenisSlot;
        this->terpasang = terpasang;
    }

    // Setter
    void setJenisSlot(string jenisSlot) { this->jenisSlot = jenisSlot; }
    void setTerpasang(bool terpasang) { this->terpasang = terpasang; }

    // Getter
    string getJenisSlot() { return jenisSlot; }
    bool getTerpasang() { return terpasang; }

    // Tampilkan Info
    void tampilkanInfo() {
        Komponen::tampilkanInfo();
        cout << " | Jenis Slot: " << jenisSlot << " | Status: " << (terpasang ? "Terpasang" : "Belum terpasang");
    }

    // Destructor
    ~KomponenInternal() {}
};