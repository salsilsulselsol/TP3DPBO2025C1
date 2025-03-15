class SmartDevice:
    def __init__(self, wifi_enabled=False, network_name=""):
        self.wifi_enabled = wifi_enabled
        self.network_name = network_name
    
    # Setter
    def set_wifi_enabled(self, wifi_enabled):
        self.wifi_enabled = wifi_enabled
    
    def set_network_name(self, network_name):
        self.network_name = network_name
    
    # Getter
    def get_wifi_enabled(self):
        return self.wifi_enabled
    
    def get_network_name(self):
        return self.network_name
    
    # Tampilkan Info
    def tampilkan_info_smart(self):
        network = self.network_name if self.network_name else "Tidak terhubung"
        return f"WiFi: {'Aktif' if self.wifi_enabled else 'Nonaktif'} | Jaringan: {network}"