public class Komponen {
    private String merk;
    private String nama;
    private int harga;

    // Constructor
    public Komponen() {
        this.merk = "";
        this.nama = "";
        this.harga = 0;
    }

    public Komponen(String merk, String nama, int harga) {
        this.merk = merk;
        this.nama = nama;
        this.harga = harga;
    }

    // Setter methods
    public void setMerk(String merk) { this.merk = merk; }
    public void setNama(String nama) { this.nama = nama; }
    public void setHarga(int harga) { this.harga = harga; }

    // Getter methods
    public String getMerk() { return merk; }
    public String getNama() { return nama; }
    public int getHarga() { return harga; }

    // Tampilkan Info
    public String tampilkanInfo() {
        return "Merk: " + merk + " | Nama: " + nama + " | Harga: Rp " + harga;
    }
}