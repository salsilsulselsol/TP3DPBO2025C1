#pragma once
#include "Storage.cpp"
using namespace std;

class HDD : public Storage {
private:
    int putaranRPM;     // Berapa RPM HDD-nya

public:
    // Constructor
    HDD(string merk = "", string nama = "", int harga = 0, 
        string jenisSlot = "", bool terpasang = false,
        int kapasitasGB = 0, int kecepatanBaca = 0, int kecepatanTulis = 0,
        int putaranRPM = 0)
        : Storage(merk, nama, harga, jenisSlot, terpasang, 
                 kapasitasGB, kecepatanBaca, kecepatanTulis) {
        this->putaranRPM = putaranRPM;
    }

    // Setter
    void setPutaranRPM(int putaranRPM) { this->putaranRPM = putaranRPM; }

    // Getter
    int getPutaranRPM() { return putaranRPM; }

    // Tampilkan Info
    void tampilkanInfo() {
        Storage::tampilkanInfo();
        cout << " | Putaran: " << putaranRPM << " RPM" << endl;
    }

    // Destructor
    ~HDD() {}
};