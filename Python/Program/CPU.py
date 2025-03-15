from KomponenInternal import KomponenInternal

class CPU(KomponenInternal):
    def __init__(self, merk="", nama="", harga=0, jenis_slot="", terpasang=False, jumlah_core=0, kecepatan_ghz=0.0):
        super().__init__(merk, nama, harga, jenis_slot, terpasang)
        self.jumlah_core = jumlah_core
        self.kecepatan_ghz = kecepatan_ghz
    
    # Setter
    def set_jumlah_core(self, jumlah_core):
        self.jumlah_core = jumlah_core
    
    def set_kecepatan_ghz(self, kecepatan_ghz):
        self.kecepatan_ghz = kecepatan_ghz
    
    # Getter
    def get_jumlah_core(self):
        return self.jumlah_core
    
    def get_kecepatan_ghz(self):
        return self.kecepatan_ghz
    
    # Tampilkan Info
    def tampilkan_info(self):
        return f"{super().tampilkan_info()} | Core: {self.jumlah_core} | Kecepatan: {self.kecepatan_ghz} GHz"