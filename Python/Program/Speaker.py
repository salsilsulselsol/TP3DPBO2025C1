from KomponenEksternal import KomponenEksternal

class Speaker(KomponenEksternal):
    def __init__(self, merk="", nama="", harga=0, jenis_koneksi="", terhubung=False, daya_output=0, stereo=True):
        super().__init__(merk, nama, harga, jenis_koneksi, terhubung)
        self.daya_output = daya_output
        self.stereo = stereo
    
    # Setter
    def set_daya_output(self, daya_output):
        self.daya_output = daya_output
    
    def set_stereo(self, stereo):
        self.stereo = stereo
    
    # Getter
    def get_daya_output(self):
        return self.daya_output
    
    def get_stereo(self):
        return self.stereo
    
    # Tampilkan Info
    def tampilkan_info(self):
        return f"{super().tampilkan_info()} | Daya Output: {self.daya_output} Watt | Stereo: {'Ya' if self.stereo else 'Tidak'}"