public class Storage extends KomponenInternal {
    private int kapasitasGB;
    private int kecepatanBaca;
    private int kecepatanTulis;

    // Constructor
    public Storage() {
        super();
        this.kapasitasGB = 0;
        this.kecepatanBaca = 0;
        this.kecepatanTulis = 0;
    }

    public Storage(String merk, String nama, int harga, String jenisSlot, boolean terpasang,
                   int kapasitasGB, int kecepatanBaca, int kecepatanTulis) {
        super(merk, nama, harga, jenisSlot, terpasang);
        this.kapasitasGB = kapasitasGB;
        this.kecepatanBaca = kecepatanBaca;
        this.kecepatanTulis = kecepatanTulis;
    }

    // Setter methods
    public void setKapasitasGB(int kapasitasGB) { this.kapasitasGB = kapasitasGB; }
    public void setKecepatanBaca(int kecepatanBaca) { this.kecepatanBaca = kecepatanBaca; }
    public void setKecepatanTulis(int kecepatanTulis) { this.kecepatanTulis = kecepatanTulis; }

    // Getter methods
    public int getKapasitasGB() { return kapasitasGB; }
    public int getKecepatanBaca() { return kecepatanBaca; }
    public int getKecepatanTulis() { return kecepatanTulis; }

    // Tampilkan Info
    @Override
    public String tampilkanInfo() {
        return super.tampilkanInfo() + " | Kapasitas: " + kapasitasGB + " GB | R/W: " + kecepatanBaca + "/" + kecepatanTulis + " MB/s";
    }
}