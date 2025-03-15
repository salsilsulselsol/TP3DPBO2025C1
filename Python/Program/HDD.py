from Storage import Storage

class HDD(Storage):
    def __init__(self, merk="", nama="", harga=0, jenis_slot="", terpasang=False, kapasitas_gb=0, kecepatan_baca=0, kecepatan_tulis=0, putaran_rpm=0):
        super().__init__(merk, nama, harga, jenis_slot, terpasang, kapasitas_gb, kecepatan_baca, kecepatan_tulis)
        self.putaran_rpm = putaran_rpm
    
    # Setter
    def set_putaran_rpm(self, putaran_rpm):
        self.putaran_rpm = putaran_rpm
    
    # Getter
    def get_putaran_rpm(self):
        return self.putaran_rpm
    
    # Tampilkan Info
    def tampilkan_info(self):
        return f"{super().tampilkan_info()} | Putaran: {self.putaran_rpm} RPM"