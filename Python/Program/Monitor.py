from KomponenEksternal import KomponenEksternal

class Monitor(KomponenEksternal):
    def __init__(self, merk="", nama="", harga=0, jenis_koneksi="", terhubung=False, ukuran_inci=0.0, resolusi="", refresh_rate=0):
        super().__init__(merk, nama, harga, jenis_koneksi, terhubung)
        self.ukuran_inci = ukuran_inci
        self.resolusi = resolusi
        self.refresh_rate = refresh_rate
    
    # Setter
    def set_ukuran_inci(self, ukuran_inci):
        self.ukuran_inci = ukuran_inci
    
    def set_resolusi(self, resolusi):
        self.resolusi = resolusi
    
    def set_refresh_rate(self, refresh_rate):
        self.refresh_rate = refresh_rate
    
    # Getter
    def get_ukuran_inci(self):
        return self.ukuran_inci
    
    def get_resolusi(self):
        return self.resolusi
    
    def get_refresh_rate(self):
        return self.refresh_rate
    
    # Tampilkan Info
    def tampilkan_info(self):
        return f"{super().tampilkan_info()} | Ukuran: {self.ukuran_inci} inci | Resolusi: {self.resolusi} | Refresh Rate: {self.refresh_rate} Hz"