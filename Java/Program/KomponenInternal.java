public class KomponenInternal extends Komponen {
    private String jenisSlot;
    private boolean terpasang;

    // Constructor
    public KomponenInternal() {
        super();
        this.jenisSlot = "";
        this.terpasang = false;
    }

    public KomponenInternal(String merk, String nama, int harga, String jenisSlot, boolean terpasang) {
        super(merk, nama, harga);
        this.jenisSlot = jenisSlot;
        this.terpasang = terpasang;
    }

    // Setter methods
    public void setJenisSlot(String jenisSlot) { this.jenisSlot = jenisSlot; }
    public void setTerpasang(boolean terpasang) { this.terpasang = terpasang; }

    // Getter methods
    public String getJenisSlot() { return jenisSlot; }
    public boolean getTerpasang() { return terpasang; }

    // Tampilkan Info
    @Override
    public String tampilkanInfo() {
        return super.tampilkanInfo() + " | Jenis Slot: " + jenisSlot + " | Status: " + (terpasang ? "Terpasang" : "Belum terpasang");
    }
}