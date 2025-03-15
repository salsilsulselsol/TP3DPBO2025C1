from KomponenInternal import KomponenInternal

class Storage(KomponenInternal):
    def __init__(self, merk="", nama="", harga=0, jenis_slot="", terpasang=False, kapasitas_gb=0, kecepatan_baca=0, kecepatan_tulis=0):
        super().__init__(merk, nama, harga, jenis_slot, terpasang)
        self.kapasitas_gb = kapasitas_gb
        self.kecepatan_baca = kecepatan_baca
        self.kecepatan_tulis = kecepatan_tulis
    
    # Setter
    def set_kapasitas_gb(self, kapasitas_gb):
        self.kapasitas_gb = kapasitas_gb
    
    def set_kecepatan_baca(self, kecepatan_baca):
        self.kecepatan_baca = kecepatan_baca
    
    def set_kecepatan_tulis(self, kecepatan_tulis):
        self.kecepatan_tulis = kecepatan_tulis
    
    # Getter
    def get_kapasitas_gb(self):
        return self.kapasitas_gb
    
    def get_kecepatan_baca(self):
        return self.kecepatan_baca
    
    def get_kecepatan_tulis(self):
        return self.kecepatan_tulis
    
    # Tampilkan Info
    def tampilkan_info(self):
        return f"{super().tampilkan_info()} | Kapasitas: {self.kapasitas_gb} GB | R/W: {self.kecepatan_baca}/{self.kecepatan_tulis} MB/s"