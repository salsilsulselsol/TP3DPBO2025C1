from Komponen import Komponen

class KomponenInternal(Komponen):
    def __init__(self, merk="", nama="", harga=0, jenis_slot="", terpasang=False):
        super().__init__(merk, nama, harga)
        self.jenis_slot = jenis_slot
        self.terpasang = terpasang
    
    # Setter
    def set_jenis_slot(self, jenis_slot):
        self.jenis_slot = jenis_slot
    
    def set_terpasang(self, terpasang):
        self.terpasang = terpasang
    
    # Getter
    def get_jenis_slot(self):
        return self.jenis_slot
    
    def get_terpasang(self):
        return self.terpasang
    
    # Tampilkan Info
    def tampilkan_info(self):
        status = "Terpasang" if self.terpasang else "Belum terpasang"
        return f"{super().tampilkan_info()} | Jenis Slot: {self.jenis_slot} | Status: {status}"