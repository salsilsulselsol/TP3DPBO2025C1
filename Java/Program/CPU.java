public class CPU extends KomponenInternal {
    private int jumlahCore;
    private double kecepatanGHz;

    // Constructor
    public CPU() {
        super();
        this.jumlahCore = 0;
        this.kecepatanGHz = 0.0;
    }

    public CPU(String merk, String nama, int harga, String jenisSlot, boolean terpasang, 
               int jumlahCore, double kecepatanGHz) {
        super(merk, nama, harga, jenisSlot, terpasang);
        this.jumlahCore = jumlahCore;
        this.kecepatanGHz = kecepatanGHz;
    }

    // Setter methods
    public void setJumlahCore(int jumlahCore) { this.jumlahCore = jumlahCore; }
    public void setKecepatanGHz(double kecepatanGHz) { this.kecepatanGHz = kecepatanGHz; }

    // Getter methods
    public int getJumlahCore() { return jumlahCore; }
    public double getKecepatanGHz() { return kecepatanGHz; }

    // Tampilkan Info
    @Override
    public String tampilkanInfo() {
        return super.tampilkanInfo() + " | Core: " + jumlahCore + " | Kecepatan: " + kecepatanGHz + " GHz";
    }
}