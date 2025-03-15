from KomponenInternal import KomponenInternal

class RAM(KomponenInternal):
    def __init__(self, merk="", nama="", harga=0, jenis_slot="", terpasang=False, kapasitas_gb=0, tipe=""):
        super().__init__(merk, nama, harga, jenis_slot, terpasang)
        self.kapasitas_gb = kapasitas_gb
        self.tipe = tipe
    
    # Setter
    def set_kapasitas_gb(self, kapasitas_gb):
        self.kapasitas_gb = kapasitas_gb
    
    def set_tipe(self, tipe):
        self.tipe = tipe
    
    # Getter
    def get_kapasitas_gb(self):
        return self.kapasitas_gb
    
    def get_tipe(self):
        return self.tipe
    
    # Tampilkan Info
    def tampilkan_info(self):
        return f"{super().tampilkan_info()} | Kapasitas: {self.kapasitas_gb} GB | Tipe: {self.tipe}"