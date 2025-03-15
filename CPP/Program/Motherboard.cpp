#pragma once
#include "KomponenInternal.cpp"
using namespace std;

class Motherboard : public KomponenInternal {
private:
    string chipset;
    string formFactor;

public:
    // Constructor
    Motherboard(string merk = "", string nama = "", int harga = 0, 
                string jenisSlot = "", bool terpasang = false,
                string chipset = "", string formFactor = "")
        : KomponenInternal(merk, nama, harga, jenisSlot, terpasang) {
        this->chipset = chipset;
        this->formFactor = formFactor;
    }

    // Setter
    void setChipset(string chipset) { this->chipset = chipset; }
    void setFormFactor(string formFactor) { this->formFactor = formFactor; }

    // Getter
    string getChipset() { return chipset; }
    string getFormFactor() { return formFactor; }

    // Tampilkan Info
    void tampilkanInfo() {
        KomponenInternal::tampilkanInfo();
        cout << " | Chipset: " << chipset << " | Form Factor: " << formFactor;
    }

    // Destructor
    ~Motherboard() {}
};