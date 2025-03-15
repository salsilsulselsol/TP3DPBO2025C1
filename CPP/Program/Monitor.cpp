#pragma once
#include "KomponenEksternal.cpp"
using namespace std;

class Monitor : public KomponenEksternal {
private:
    float ukuranInci;
    string resolusi;
    int refreshRate;
    
public:
    // Constructor
    Monitor(string merk = "", string nama = "", int harga = 0, 
            string jenisKoneksi = "", bool terhubung = false,
            float ukuranInci = 0.0, string resolusi = "", int refreshRate = 0)
        : KomponenEksternal(merk, nama, harga, jenisKoneksi, terhubung) {
        this->ukuranInci = ukuranInci;
        this->resolusi = resolusi;
        this->refreshRate = refreshRate;
    }
    
    // Setter
    void setUkuranInci(float ukuranInci) { this->ukuranInci = ukuranInci; }
    void setResolusi(string resolusi) { this->resolusi = resolusi; }
    void setRefreshRate(int refreshRate) { this->refreshRate = refreshRate; }
    
    // Getter
    float getUkuranInci() { return ukuranInci; }
    string getResolusi() { return resolusi; }
    int getRefreshRate() { return refreshRate; }
    
    // Tampilkan Info
    void tampilkanInfo() {
        KomponenEksternal::tampilkanInfo();
        cout << " | Ukuran: " << ukuranInci << " | Resolusi: " << resolusi << " | GHz" << "Refresh Rate: " << refreshRate << " Hz";
    }
    
    // Destructor
    ~Monitor() {}
};