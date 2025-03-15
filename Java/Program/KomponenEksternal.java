public class KomponenEksternal extends Komponen {
    private String jenisKoneksi;
    private boolean terhubung;

    // Constructor
    public KomponenEksternal() {
        super();
        this.jenisKoneksi = "";
        this.terhubung = false;
    }

    public KomponenEksternal(String merk, String nama, int harga, String jenisKoneksi, boolean terhubung) {
        super(merk, nama, harga);
        this.jenisKoneksi = jenisKoneksi;
        this.terhubung = terhubung;
    }

    // Setter methods
    public void setJenisKoneksi(String jenisKoneksi) { this.jenisKoneksi = jenisKoneksi; }
    public void setTerhubung(boolean terhubung) { this.terhubung = terhubung; }

    // Getter methods
    public String getJenisKoneksi() { return jenisKoneksi; }
    public boolean getTerhubung() { return terhubung; }

    // Tampilkan Info
    @Override
    public String tampilkanInfo() {
        return super.tampilkanInfo() + " | Jenis Koneksi: " + jenisKoneksi + " | Status: " + (terhubung ? "Terhubung" : "Tidak terhubung");
    }
}