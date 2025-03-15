#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "CPU.cpp"
#include "RAM.cpp"
#include "Motherboard.cpp"
#include "SSD.cpp"
#include "HDD.cpp"
#include "Monitor.cpp"
#include "SmartSpeaker.cpp"
using namespace std;

class Komputer {
private:
    string nama;
    CPU cpu;
    vector<RAM> ramList;
    Motherboard motherboard;
    vector<SSD> ssdList;
    vector<HDD> hddList;
    Monitor monitor;
    SmartSpeaker smartSpeaker;

public:
    // Constructor
    Komputer(string nama = "", CPU cpu = CPU(), vector<RAM> ramList = {}, 
            Motherboard motherboard = Motherboard(), 
            vector<SSD> ssdList = {}, vector<HDD> hddList = {},
            Monitor monitor = Monitor(),
            SmartSpeaker smartSpeaker = SmartSpeaker()) {
        this->nama = nama;
        this->cpu = cpu;
        this->ramList = ramList;
        this->motherboard = motherboard;
        this->ssdList = ssdList;
        this->hddList = hddList;
        this->monitor = monitor;
        this->smartSpeaker = smartSpeaker;
    }

    // Setter
    void setNama(string nama) { this->nama = nama; }
    void setCpu(CPU cpu) { this->cpu = cpu; }
    void setRamList(vector<RAM> ramList) { this->ramList = ramList; }
    void setMotherboard(Motherboard motherboard) { this->motherboard = motherboard; }
    void setSsdList(vector<SSD> ssdList) { this->ssdList = ssdList; }
    void setHddList(vector<HDD> hddList) { this->hddList = hddList; }
    void setMonitor(Monitor monitor) { this->monitor = monitor; }
    void setSmartSpeaker(SmartSpeaker smartSpeaker) { this->smartSpeaker = smartSpeaker; }

    // Getter
    string getNama() { return nama; }
    CPU getCpu() { return cpu; }
    vector<RAM> getRamList() { return ramList; }
    Motherboard getMotherboard() { return motherboard; }
    vector<SSD> getSsdList() { return ssdList; }
    vector<HDD> getHddList() { return hddList; }
    Monitor getMonitor() { return monitor; }
    SmartSpeaker getSmartSpeaker() { return smartSpeaker; }

    // Method untuk manipulasi komponen
    void tambahRAM(RAM ram) {
        ramList.push_back(ram);
        cout << "RAM " << ram.getNama() << " berhasil ditambahkan ke " << nama << endl;
    }

    void tambahSSD(SSD ssd) {
        ssdList.push_back(ssd);
        cout << "SSD " << ssd.getNama() << " berhasil ditambahkan ke " << nama << endl;
    }

    void tambahHDD(HDD hdd) {
        hddList.push_back(hdd);
        cout << "HDD " << hdd.getNama() << " berhasil ditambahkan ke " << nama << endl;
    }

    // Tampilkan Info
    void tampilkanSpesifikasi() {
        cout << "============ SPESIFIKASI KOMPUTER: " << nama << " ============" << endl << endl;
        
        cout << "CPU: ";
        cpu.tampilkanInfo();
        cout << endl << endl;
        
        cout << "RAM:" << endl;
        for (int i = 0; i < ramList.size(); i++) {
            cout << "  [" << i+1 << "] ";
            ramList[i].tampilkanInfo();
            cout << endl;
        }
        cout << endl;
        
        cout << "MOTHERBOARD: ";
        motherboard.tampilkanInfo();
        cout << endl << endl;
        
        cout << "STORAGE:" << endl;
        cout << "  SSD:" << endl;
        for (int i = 0; i < ssdList.size(); i++) {
            cout << "    [" << i+1 << "] ";
            ssdList[i].tampilkanInfo();
            cout << endl;
        }
        
        cout << "  HDD:" << endl;
        for (int i = 0; i < hddList.size(); i++) {
            cout << "    [" << i+1 << "] ";
            hddList[i].tampilkanInfo();
            cout << endl;
        }
        cout << endl;
        
        cout << "MONITOR: ";
        monitor.tampilkanInfo();
        cout << endl << endl;
        
        cout << "SMART SPEAKER: ";
        smartSpeaker.tampilkanInfo();
        cout << endl << endl;
        
        cout << "=======================================================" << endl;
    }

    // Destructor
    ~Komputer() {}
};