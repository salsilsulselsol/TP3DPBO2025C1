public class Motherboard extends KomponenInternal {
    private String chipset;
    private String formFactor;

    // Constructor
    public Motherboard() {
        super();
        this.chipset = "";
        this.formFactor = "";
    }

    public Motherboard(String merk, String nama, int harga, String jenisSlot, boolean terpasang,
                      String chipset, String formFactor) {
        super(merk, nama, harga, jenisSlot, terpasang);
        this.chipset = chipset;
        this.formFactor = formFactor;
    }

    // Setter methods
    public void setChipset(String chipset) { this.chipset = chipset; }
    public void setFormFactor(String formFactor) { this.formFactor = formFactor; }

    // Getter methods
    public String getChipset() { return chipset; }
    public String getFormFactor() { return formFactor; }

    // Tampilkan Info
    @Override
    public String tampilkanInfo() {
        return super.tampilkanInfo() + " | Chipset: " + chipset + " | Form Factor: " + formFactor;
    }
}