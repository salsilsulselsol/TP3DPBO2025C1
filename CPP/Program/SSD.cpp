#pragma once
#include "Storage.cpp"
using namespace std;

class SSD : public Storage {
private:
    bool nvme;

public:
    // Constructor
    SSD(string merk = "", string nama = "", int harga = 0, 
        string jenisSlot = "", bool terpasang = false,
        int kapasitasGB = 0, int kecepatanBaca = 0, int kecepatanTulis = 0,
        bool nvme = false)
        : Storage(merk, nama, harga, jenisSlot, terpasang, 
                 kapasitasGB, kecepatanBaca, kecepatanTulis) {
        this->nvme = nvme;
    }

    // Setter
    void setNvme(bool nvme) { this->nvme = nvme; }

    // Getter
    bool getNvme() { return nvme; }

    // Tampilkan Info
    void tampilkanInfo() {
        Storage::tampilkanInfo();
        cout << " | NVMe: " << (nvme ? "Ya" : "Tidak") << endl;
    }

    // Destructor
    ~SSD() {}
};