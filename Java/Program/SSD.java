public class SSD extends Storage {
    private boolean nvme;

    // Constructor
    public SSD() {
        super();
        this.nvme = false;
    }

    public SSD(String merk, String nama, int harga, String jenisSlot, boolean terpasang,
               int kapasitasGB, int kecepatanBaca, int kecepatanTulis, boolean nvme) {
        super(merk, nama, harga, jenisSlot, terpasang, kapasitasGB, kecepatanBaca, kecepatanTulis);
        this.nvme = nvme;
    }

    // Setter methods
    public void setNvme(boolean nvme) { this.nvme = nvme; }

    // Getter methods
    public boolean getNvme() { return nvme; }

    // Tampilkan Info
    @Override
    public String tampilkanInfo() {
        return super.tampilkanInfo() + " | NVMe: " + (nvme ? "Ya" : "Tidak");
    }
}