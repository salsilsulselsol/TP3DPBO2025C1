#pragma once
#include "KomponenInternal.cpp"
using namespace std;

class Storage : public KomponenInternal {
private:
    int kapasitasGB;
    int kecepatanBaca;
    int kecepatanTulis;

public:
    // Constructor
    Storage(string merk = "", string nama = "", int harga = 0, 
            string jenisSlot = "", bool terpasang = false,
            int kapasitasGB = 0, int kecepatanBaca = 0, int kecepatanTulis = 0)
        : KomponenInternal(merk, nama, harga, jenisSlot, terpasang) {
        this->kapasitasGB = kapasitasGB;
        this->kecepatanBaca = kecepatanBaca;
        this->kecepatanTulis = kecepatanTulis;
    }

    // Setter
    void setKapasitasGB(int kapasitasGB) { this->kapasitasGB = kapasitasGB; }
    void setKecepatanBaca(int kecepatanBaca) { this->kecepatanBaca = kecepatanBaca; }
    void setKecepatanTulis(int kecepatanTulis) { this->kecepatanTulis = kecepatanTulis; }

    // Getter
    int getKapasitasGB() { return kapasitasGB; }
    int getKecepatanBaca() { return kecepatanBaca; }
    int getKecepatanTulis() { return kecepatanTulis; }

    // Tampilkan Info
    void tampilkanInfo() {
        KomponenInternal::tampilkanInfo();
        cout << " | Kapasitas: " << kapasitasGB << " GB | R/W: " << kecepatanBaca << "/" << kecepatanTulis << " MB/s";
    }

    // Destructor
    ~Storage() {}
};