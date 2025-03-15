from Speaker import Speaker
from SmartDevice import SmartDevice

class SmartSpeaker(Speaker, SmartDevice):
    def __init__(self, merk="", nama="", harga=0, jenis_koneksi="", terhubung=False, daya_output=0, stereo=True, wifi_enabled=False, network_name="", asisten=""):
        Speaker.__init__(self, merk, nama, harga, jenis_koneksi, terhubung, daya_output, stereo)
        SmartDevice.__init__(self, wifi_enabled, network_name)
        self.asisten = asisten
    
    # Setter
    def set_asisten(self, asisten):
        self.asisten = asisten
    
    # Getter
    def get_asisten(self):
        return self.asisten
    
    # Tampilkan Info
    def tampilkan_info(self):
        speaker_info = Speaker.tampilkan_info(self)
        smart_info = SmartDevice.tampilkan_info_smart(self)
        asisten = self.asisten if self.asisten else "Tidak ada"
        return f"{speaker_info} | {smart_info} | Asisten: {asisten}"