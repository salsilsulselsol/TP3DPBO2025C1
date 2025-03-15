#include <iostream>
#include <vector>
#include "Komputer.cpp"
using namespace std;

int main() {
    // Masukan data dulu
    CPU cpu("Intel", "Core i7", 4500000, "LGA1700", true, 8, 3.6);
    
    vector<RAM> ramList;
    ramList.push_back(RAM("Corsair", "Vengeance", 1200000, "DIMM", true, 16, "DDR4"));
    
    Motherboard mobo("ASUS", "ROG Strix", 4800000, "ATX", true, "Z690", "ATX");
    
    vector<SSD> ssdList;
    ssdList.push_back(SSD("Samsung", "970 EVO", 1800000, "M.2", true, 1000, 3500, 3300, true));
    
    vector<HDD> hddList;
    hddList.push_back(HDD("Seagate", "Barracuda", 1200000, "SATA", true, 2000, 190, 180, 7200));
    
    // Monitor
    Monitor monitor("LG", "UltraGear", 3800000, "DisplayPort", true, 27, "2560x1440", 144);
    
    // Smart Speaker dengan multiple inheritance
    SmartSpeaker smartSpeaker("JBL", "Link 10", 1500000, "WiFi/Bluetooth", true, 20, true, true, "WiFi-Rumah", "Google Assistant");
    
    // Membuat komputer
    Komputer pc("PC Gaming", cpu, ramList, mobo, ssdList, hddList, monitor, smartSpeaker);
    
    // Tampilkan spesifikasi awal
    pc.tampilkanSpesifikasi();
    
    // Tambahkan komponen baru
    RAM ramTambahan("Kingston", "HyperX", 850000, "DIMM", false, 16, "DDR4");
    pc.tambahRAM(ramTambahan);
    
    SSD ssdTambahan("Samsung", "980 Pro", 2500000, "M.2", false, 2000, 7000, 5000, true);
    pc.tambahSSD(ssdTambahan);
    
    // Tampilkan spesifikasi akhir
    cout << "\nSpesifikasi setelah upgrade:\n" << endl;
    pc.tampilkanSpesifikasi();
    
    return 0;
}