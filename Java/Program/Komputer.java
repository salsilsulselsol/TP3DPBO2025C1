import java.util.ArrayList;
import java.util.List;

public class Komputer {
    private String nama;
    private CPU cpu;
    private List<RAM> ramList;
    private Motherboard motherboard;
    private List<SSD> ssdList;
    private List<HDD> hddList;
    private Monitor monitor;
    private SmartSpeaker smartSpeaker;

    // Constructor
    public Komputer() {
        this.nama = "";
        this.cpu = new CPU();
        this.ramList = new ArrayList<>();
        this.motherboard = new Motherboard();
        this.ssdList = new ArrayList<>();
        this.hddList = new ArrayList<>();
        this.monitor = new Monitor();
        this.smartSpeaker = new SmartSpeaker();
    }

    public Komputer(String nama, CPU cpu, List<RAM> ramList, Motherboard motherboard,
                   List<SSD> ssdList, List<HDD> hddList, Monitor monitor, SmartSpeaker smartSpeaker) {
        this.nama = nama;
        this.cpu = cpu;
        this.ramList = ramList;
        this.motherboard = motherboard;
        this.ssdList = ssdList;
        this.hddList = hddList;
        this.monitor = monitor;
        this.smartSpeaker = smartSpeaker;
    }

    // Setter methods
    public void setNama(String nama) { this.nama = nama; }
    public void setCpu(CPU cpu) { this.cpu = cpu; }
    public void setRamList(List<RAM> ramList) { this.ramList = ramList; }
    public void setMotherboard(Motherboard motherboard) { this.motherboard = motherboard; }
    public void setSsdList(List<SSD> ssdList) { this.ssdList = ssdList; }
    public void setHddList(List<HDD> hddList) { this.hddList = hddList; }
    public void setMonitor(Monitor monitor) { this.monitor = monitor; }
    public void setSmartSpeaker(SmartSpeaker smartSpeaker) { this.smartSpeaker = smartSpeaker; }

    // Getter methods
    public String getNama() { return nama; }
    public CPU getCpu() { return cpu; }
    public List<RAM> getRamList() { return ramList; }
    public Motherboard getMotherboard() { return motherboard; }
    public List<SSD> getSsdList() { return ssdList; }
    public List<HDD> getHddList() { return hddList; }
    public Monitor getMonitor() { return monitor; }
    public SmartSpeaker getSmartSpeaker() { return smartSpeaker; }

    // Method untuk manipulasi komponen
    public void tambahRAM(RAM ram) {
        ramList.add(ram);
        System.out.println("RAM " + ram.getNama() + " berhasil ditambahkan ke " + nama);
    }

    public void tambahSSD(SSD ssd) {
        ssdList.add(ssd);
        System.out.println("SSD " + ssd.getNama() + " berhasil ditambahkan ke " + nama);
    }

    public void tambahHDD(HDD hdd) {
        hddList.add(hdd);
        System.out.println("HDD " + hdd.getNama() + " berhasil ditambahkan ke " + nama);
    }

    // Tampilkan Info
    public void tampilkanSpesifikasi() {
        System.out.println("========== SPESIFIKASI KOMPUTER: " + nama + " ==========\n");
        
        System.out.println("CPU: " + cpu.tampilkanInfo() + "\n");
        
        System.out.println("RAM:");
        for (int i = 0; i < ramList.size(); i++) {
            System.out.println("  [" + (i+1) + "] " + ramList.get(i).tampilkanInfo());
        }
        System.out.println();
        
        System.out.println("MOTHERBOARD: " + motherboard.tampilkanInfo() + "\n");
        
        System.out.println("STORAGE:");
        System.out.println("  SSD:");
        for (int i = 0; i < ssdList.size(); i++) {
            System.out.println("    [" + (i+1) + "] " + ssdList.get(i).tampilkanInfo());
        }
        
        System.out.println("  HDD:");
        for (int i = 0; i < hddList.size(); i++) {
            System.out.println("    [" + (i+1) + "] " + hddList.get(i).tampilkanInfo());
        }
        System.out.println();
        
        System.out.println("MONITOR: " + monitor.tampilkanInfo() + "\n");
        
        System.out.println("SMART SPEAKER: " + smartSpeaker.tampilkanInfo() + "\n");
        
        System.out.println("=======================================================");
    }
}