// Interface untuk SmartDevice karena Java tidak mendukung multiple inheritance class
interface SmartDeviceInterface {
    void setWifiEnabled(boolean wifiEnabled);
    void setNetworkName(String networkName);
    boolean getWifiEnabled();
    String getNetworkName();
}

public class SmartSpeaker extends Speaker implements SmartDeviceInterface {
    private SmartDevice smartDevice;
    private String asisten;

    // Constructor
    public SmartSpeaker() {
        super();
        this.smartDevice = new SmartDevice();
        this.asisten = "";
    }

    public SmartSpeaker(String merk, String nama, int harga, String jenisKoneksi, boolean terhubung,
                       int dayaOutput, boolean stereo, boolean wifiEnabled, String networkName,
                       String asisten) {
        super(merk, nama, harga, jenisKoneksi, terhubung, dayaOutput, stereo);
        this.smartDevice = new SmartDevice(wifiEnabled, networkName);
        this.asisten = asisten;
    }

    // Setter methods
    public void setAsisten(String asisten) { this.asisten = asisten; }
    public void setWifiEnabled(boolean wifiEnabled) { smartDevice.setWifiEnabled(wifiEnabled); }
    public void setNetworkName(String networkName) { smartDevice.setNetworkName(networkName); }

    // Getter methods
    public String getAsisten() { return asisten; }
    public boolean getWifiEnabled() { return smartDevice.getWifiEnabled(); }
    public String getNetworkName() { return smartDevice.getNetworkName(); }

    // Tampilkan Info
    @Override
    public String tampilkanInfo() {
        return super.tampilkanInfo() + " | " + smartDevice.tampilkanInfoSmart() +
               " | Asisten: " + (asisten.isEmpty() ? "Tidak ada" : asisten);
    }
}