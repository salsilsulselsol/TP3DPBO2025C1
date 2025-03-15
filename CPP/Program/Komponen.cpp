#pragma once
#include <iostream>
#include <string>
using namespace std;

class Komponen {
private:
    string merk;    // merk komponen
    string nama;    // nama komponen
    int harga;      // harga komponen

public:
    // Constructor
    Komponen(string merk = "", string nama = "", int harga = 0) {
        this->merk = merk;
        this->nama = nama;
        this->harga = harga;
    }

    // Setter
    void setMerk(string merk) { this->merk = merk; }
    void setNama(string nama) { this->nama = nama; }
    void setHarga(int harga) { this->harga = harga; }

    // Getter
    string getMerk() { return merk; }
    string getNama() { return nama; }
    int getHarga() { return harga; }

    // Tampilkan Info
    void tampilkanInfo() {
        cout << "Merk: " << merk << " | Nama: " << nama << " | Harga: Rp " << harga;
    }

    // Destructor
    ~Komponen() {}
};