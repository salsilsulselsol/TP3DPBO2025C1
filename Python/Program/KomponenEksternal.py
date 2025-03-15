from Komponen import Komponen

class KomponenEksternal(Komponen):
    def __init__(self, merk="", nama="", harga=0, jenis_koneksi="", terhubung=False):
        super().__init__(merk, nama, harga)
        self.jenis_koneksi = jenis_koneksi
        self.terhubung = terhubung
    
    # Setter
    def set_jenis_koneksi(self, jenis_koneksi):
        self.jenis_koneksi = jenis_koneksi
    
    def set_terhubung(self, terhubung):
        self.terhubung = terhubung
    
    # Getter
    def get_jenis_koneksi(self):
        return self.jenis_koneksi
    
    def get_terhubung(self):
        return self.terhubung
    
    # Tampilkan Info
    def tampilkan_info(self):
        status = "Terhubung" if self.terhubung else "Tidak terhubung"
        return f"{super().tampilkan_info()} | Jenis Koneksi: {self.jenis_koneksi} | Status: {status}"