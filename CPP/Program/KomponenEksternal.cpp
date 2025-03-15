#pragma once
#include "Komponen.cpp"
using namespace std;

class KomponenEksternal : public Komponen {
private:
    string jenisKoneksi;    //
    bool terhubung;

public:
    // Constructor
    KomponenEksternal(string merk = "", string nama = "", int harga = 0, 
                     string jenisKoneksi = "", bool terhubung = false)
        : Komponen(merk, nama, harga) {
        this->jenisKoneksi = jenisKoneksi;
        this->terhubung = terhubung;
    }

    // Setter
    void setJenisKoneksi(string jenisKoneksi) { this->jenisKoneksi = jenisKoneksi; }
    void setTerhubung(bool terhubung) { this->terhubung = terhubung; }

    // Getter
    string getJenisKoneksi() { return jenisKoneksi; }
    bool getTerhubung() { return terhubung; }

    // Tampilkan Info
    void tampilkanInfo() {
        Komponen::tampilkanInfo();
        cout << " | Jenis Koneksi: " << jenisKoneksi << " | Status: " << (terhubung ? "Terhubung" : "Belum terhubung");
    }

    // Destructor
    ~KomponenEksternal() {}
};