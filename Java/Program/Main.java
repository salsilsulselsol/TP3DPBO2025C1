import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Membuat komponen-komponen
        CPU cpu = new CPU("Intel", "Core i7", 4500000, "LGA1700", true, 8, 3.6);
        
        List<RAM> ramList = new ArrayList<>();
        ramList.add(new RAM("Corsair", "Vengeance", 1200000, "DIMM", true, 16, "DDR4"));
        
        Motherboard mobo = new Motherboard("ASUS", "ROG Strix", 4800000, "ATX", true, "Z690", "ATX");
        
        List<SSD> ssdList = new ArrayList<>();
        ssdList.add(new SSD("Samsung", "970 EVO", 1800000, "M.2", true, 1000, 3500, 3300, true));
        
        List<HDD> hddList = new ArrayList<>();
        hddList.add(new HDD("Seagate", "Barracuda", 1200000, "SATA", true, 2000, 190, 180, 7200));
        
        // Monitor
        Monitor monitor = new Monitor("LG", "UltraGear", 3800000, "DisplayPort", true, 27.0f, "2560x1440", 144);
        
        // Smart Speaker
        SmartSpeaker smartSpeaker = new SmartSpeaker("JBL", "Link 10", 1500000, "WiFi/Bluetooth", true, 20, true, 
                                                   true, "WiFi-Rumah", "Google Assistant");
        
        // Membuat komputer
        Komputer pc = new Komputer("PC Gaming", cpu, ramList, mobo, ssdList, hddList, monitor, smartSpeaker);
        
        // Tampilkan spesifikasi awal
        pc.tampilkanSpesifikasi();
        
        // Tambahkan komponen baru
        RAM ramTambahan = new RAM("Kingston", "HyperX", 850000, "DIMM", false, 16, "DDR4");
        pc.tambahRAM(ramTambahan);
        
        SSD ssdTambahan = new SSD("Samsung", "980 Pro", 2500000, "M.2", false, 2000, 7000, 5000, true);
        pc.tambahSSD(ssdTambahan);
        
        // Tampilkan spesifikasi akhir
        System.out.println("\nSpesifikasi setelah upgrade:\n");
        pc.tampilkanSpesifikasi();
    }
}
