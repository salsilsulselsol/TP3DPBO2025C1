public class Monitor extends KomponenEksternal {
    private float ukuranInci;
    private String resolusi;
    private int refreshRate;

    // Constructor
    public Monitor() {
        super();
        this.ukuranInci = 0.0f;
        this.resolusi = "";
        this.refreshRate = 0;
    }

    public Monitor(String merk, String nama, int harga, String jenisKoneksi, boolean terhubung,
                  float ukuranInci, String resolusi, int refreshRate) {
        super(merk, nama, harga, jenisKoneksi, terhubung);
        this.ukuranInci = ukuranInci;
        this.resolusi = resolusi;
        this.refreshRate = refreshRate;
    }

    // Setter methods
    public void setUkuranInci(float ukuranInci) { this.ukuranInci = ukuranInci; }
    public void setResolusi(String resolusi) { this.resolusi = resolusi; }
    public void setRefreshRate(int refreshRate) { this.refreshRate = refreshRate; }

    // Getter methods
    public float getUkuranInci() { return ukuranInci; }
    public String getResolusi() { return resolusi; }
    public int getRefreshRate() { return refreshRate; }

    // Tampilkan Info
    @Override
    public String tampilkanInfo() {
        return super.tampilkanInfo() + " | Ukuran: " + ukuranInci + " inci | Resolusi: " + resolusi + " | Refresh Rate: " + refreshRate + " Hz";
    }
}