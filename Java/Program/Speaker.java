public class Speaker extends KomponenEksternal {
    private int dayaOutput;
    private boolean stereo;

    // Constructor
    public Speaker() {
        super();
        this.dayaOutput = 0;
        this.stereo = false;
    }

    public Speaker(String merk, String nama, int harga, String jenisKoneksi, boolean terhubung,
                  int dayaOutput, boolean stereo) {
        super(merk, nama, harga, jenisKoneksi, terhubung);
        this.dayaOutput = dayaOutput;
        this.stereo = stereo;
    }

    // Setter methods
    public void setDayaOutput(int dayaOutput) { this.dayaOutput = dayaOutput; }
    public void setStereo(boolean stereo) { this.stereo = stereo; }

    // Getter methods
    public int getDayaOutput() { return dayaOutput; }
    public boolean getStereo() { return stereo; }

    // Tampilkan Info
    @Override
    public String tampilkanInfo() {
        return super.tampilkanInfo() + " | Daya Output: " + dayaOutput + " Watt | Stereo: " + (stereo ? "Ya" : "Tidak");
    }
}