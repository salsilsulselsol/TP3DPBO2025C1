from CPU import CPU
from RAM import RAM
from Motherboard import Motherboard
from SSD import SSD
from HDD import HDD
from Monitor import Monitor
from SmartSpeaker import SmartSpeaker
from Komputer import Komputer

def main():
    # Membuat komponen-komponen
    cpu = CPU("Intel", "Core i7", 4500000, "LGA1700", True, 8, 3.6)
    
    ram_list = [
        RAM("Corsair", "Vengeance", 1200000, "DIMM", True, 16, "DDR4")
    ]
    
    motherboard = Motherboard("ASUS", "ROG Strix", 4800000, "ATX", True, "Z690", "ATX")
    
    ssd_list = [
        SSD("Samsung", "970 EVO", 1800000, "M.2", True, 1000, 3500, 3300, True)
    ]
    
    hdd_list = [
        HDD("Seagate", "Barracuda", 1200000, "SATA", True, 2000, 190, 180, 7200)
    ]
    
    # Monitor
    monitor = Monitor("LG", "UltraGear", 3800000, "DisplayPort", True, 27, "2560x1440", 144)
    
    # Smart Speaker dengan multiple inheritance
    smart_speaker = SmartSpeaker("JBL", "Link 10", 1500000, "WiFi/Bluetooth", True, 20, True, 
                                True, "WiFi-Rumah", "Google Assistant")
    
    # Membuat komputer
    pc = Komputer("PC Gaming", cpu, ram_list, motherboard, ssd_list, hdd_list, monitor, smart_speaker)
    
    # Tampilkan spesifikasi awal
    pc.tampilkan_spesifikasi()
    
    # Tambahkan komponen baru
    ram_tambahan = RAM("Kingston", "HyperX", 850000, "DIMM", False, 16, "DDR4")
    pc.tambah_ram(ram_tambahan)
    
    ssd_tambahan = SSD("Samsung", "980 Pro", 2500000, "M.2", False, 2000, 7000, 5000, True)
    pc.tambah_ssd(ssd_tambahan)
    
    # Tampilkan spesifikasi akhir
    print("\nSpesifikasi setelah upgrade:\n")
    pc.tampilkan_spesifikasi()

if __name__ == "__main__":
    main()