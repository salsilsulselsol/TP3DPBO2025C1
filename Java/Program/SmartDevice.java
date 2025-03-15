public class SmartDevice {
    private boolean wifiEnabled;
    private String networkName;

    // Constructor
    public SmartDevice() {
        this.wifiEnabled = false;
        this.networkName = "";
    }

    public SmartDevice(boolean wifiEnabled, String networkName) {
        this.wifiEnabled = wifiEnabled;
        this.networkName = networkName;
    }

    // Setter methods
    public void setWifiEnabled(boolean wifiEnabled) { this.wifiEnabled = wifiEnabled; }
    public void setNetworkName(String networkName) { this.networkName = networkName; }

    // Getter methods
    public boolean getWifiEnabled() { return wifiEnabled; }
    public String getNetworkName() { return networkName; }

    // Tampilkan Info
    public String tampilkanInfoSmart() {
        return "WiFi: " + (wifiEnabled ? "Aktif" : "Nonaktif") + " | Jaringan: " + (networkName.isEmpty() ? "Tidak terhubung" : networkName);
    }
}