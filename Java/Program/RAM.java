public class RAM extends KomponenInternal {
    private int kapasitasGB;
    private String tipe;

    // Constructor
    public RAM() {
        super();
        this.kapasitasGB = 0;
        this.tipe = "";
    }

    public RAM(String merk, String nama, int harga, String jenisSlot, boolean terpasang,
               int kapasitasGB, String tipe) {
        super(merk, nama, harga, jenisSlot, terpasang);
        this.kapasitasGB = kapasitasGB;
        this.tipe = tipe;
    }

    // Setter methods
    public void setKapasitasGB(int kapasitasGB) { this.kapasitasGB = kapasitasGB; }
    public void setTipe(String tipe) { this.tipe = tipe; }

    // Getter methods
    public int getKapasitasGB() { return kapasitasGB; }
    public String getTipe() { return tipe; }

    // Tampilkan Info
    @Override
    public String tampilkanInfo() {
        return super.tampilkanInfo() + " | Kapasitas: " + kapasitasGB + " GB | Tipe: " + tipe;
    }
}