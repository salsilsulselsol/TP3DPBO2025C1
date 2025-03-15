from CPU import CPU
from Motherboard import Motherboard
from Monitor import Monitor
from SmartSpeaker import SmartSpeaker

class Komputer:
    def __init__(self, nama="", cpu=None, ram_list=None, motherboard=None, 
                 ssd_list=None, hdd_list=None, monitor=None, smart_speaker=None):
        self.nama = nama
        self.cpu = cpu if cpu else CPU()
        self.ram_list = ram_list if ram_list else []
        self.motherboard = motherboard if motherboard else Motherboard()
        self.ssd_list = ssd_list if ssd_list else []
        self.hdd_list = hdd_list if hdd_list else []
        self.monitor = monitor if monitor else Monitor()
        self.smart_speaker = smart_speaker if smart_speaker else SmartSpeaker()
    
    # Setter
    def set_nama(self, nama):
        self.nama = nama
    
    def set_cpu(self, cpu):
        self.cpu = cpu
    
    def set_ram_list(self, ram_list):
        self.ram_list = ram_list
    
    def set_motherboard(self, motherboard):
        self.motherboard = motherboard
    
    def set_ssd_list(self, ssd_list):
        self.ssd_list = ssd_list
    
    def set_hdd_list(self, hdd_list):
        self.hdd_list = hdd_list
    
    def set_monitor(self, monitor):
        self.monitor = monitor
    
    def set_smart_speaker(self, smart_speaker):
        self.smart_speaker = smart_speaker
    
    # Getter
    def get_nama(self):
        return self.nama
    
    def get_cpu(self):
        return self.cpu
    
    def get_ram_list(self):
        return self.ram_list
    
    def get_motherboard(self):
        return self.motherboard
    
    def get_ssd_list(self):
        return self.ssd_list
    
    def get_hdd_list(self):
        return self.hdd_list
    
    def get_monitor(self):
        return self.monitor
    
    def get_smart_speaker(self):
        return self.smart_speaker
    
    # Method untuk manipulasi komponen
    def tambah_ram(self, ram):
        self.ram_list.append(ram)
        print(f"RAM {ram.get_nama()} berhasil ditambahkan ke {self.nama}")
    
    def tambah_ssd(self, ssd):
        self.ssd_list.append(ssd)
        print(f"SSD {ssd.get_nama()} berhasil ditambahkan ke {self.nama}")
    
    def tambah_hdd(self, hdd):
        self.hdd_list.append(hdd)
        print(f"HDD {hdd.get_nama()} berhasil ditambahkan ke {self.nama}")
    
    # Tampilkan Info
    def tampilkan_spesifikasi(self):
        print(f"============ SPESIFIKASI KOMPUTER: {self.nama} ============\n")
        
        print(f"CPU: {self.cpu.tampilkan_info()}\n")
        
        print("RAM:")
        for i, ram in enumerate(self.ram_list, 1):
            print(f"  [{i}] {ram.tampilkan_info()}")
        print()
        
        print(f"MOTHERBOARD: {self.motherboard.tampilkan_info()}\n")
        
        print("STORAGE:")
        print("  SSD:")
        for i, ssd in enumerate(self.ssd_list, 1):
            print(f"    [{i}] {ssd.tampilkan_info()}")
        
        print("  HDD:")
        for i, hdd in enumerate(self.hdd_list, 1):
            print(f"    [{i}] {hdd.tampilkan_info()}")
        print()
        
        print(f"MONITOR: {self.monitor.tampilkan_info()}\n")
        
        print(f"SMART SPEAKER: {self.smart_speaker.tampilkan_info()}\n")
        
        print("=======================================================")