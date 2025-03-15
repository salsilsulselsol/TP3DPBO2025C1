public class HDD extends Storage {
    private int putaranRPM;

    // Constructor
    public HDD() {
        super();
        this.putaranRPM = 0;
    }

    public HDD(String merk, String nama, int harga, String jenisSlot, boolean terpasang,
               int kapasitasGB, int kecepatanBaca, int kecepatanTulis, int putaranRPM) {
        super(merk, nama, harga, jenisSlot, terpasang, kapasitasGB, kecepatanBaca, kecepatanTulis);
        this.putaranRPM = putaranRPM;
    }

    // Setter methods
    public void setPutaranRPM(int putaranRPM) { this.putaranRPM = putaranRPM; }

    // Getter methods
    public int getPutaranRPM() { return putaranRPM; }

    // Tampilkan Info
    @Override
    public String tampilkanInfo() {
        return super.tampilkanInfo() + " | Putaran: " + putaranRPM + " RPM";
    }
}