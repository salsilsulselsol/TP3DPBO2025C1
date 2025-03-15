from Storage import Storage

class SSD(Storage):
    def __init__(self, merk="", nama="", harga=0, jenis_slot="", terpasang=False, kapasitas_gb=0, kecepatan_baca=0, kecepatan_tulis=0, nvme=False):
        super().__init__(merk, nama, harga, jenis_slot, terpasang, kapasitas_gb, kecepatan_baca, kecepatan_tulis)
        self.nvme = nvme
    
    # Setter
    def set_nvme(self, nvme):
        self.nvme = nvme
    
    # Getter
    def get_nvme(self):
        return self.nvme
    
    # Tampilkan Info
    def tampilkan_info(self):
        return f"{super().tampilkan_info()} | NVMe: {'Ya' if self.nvme else 'Tidak'}"