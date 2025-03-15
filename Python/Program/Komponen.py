class Komponen:
    def __init__(self, merk="", nama="", harga=0):
        self.merk = merk
        self.nama = nama
        self.harga = harga
    
    # Setter
    def set_merk(self, merk):
        self.merk = merk
    
    def set_nama(self, nama):
        self.nama = nama
    
    def set_harga(self, harga):
        self.harga = harga
    
    # Getter
    def get_merk(self):
        return self.merk
    
    def get_nama(self):
        return self.nama
    
    def get_harga(self):
        return self.harga
    
    # Tampilkan Info
    def tampilkan_info(self):
        return f"Merk: {self.merk} | Nama: {self.nama} | Harga: Rp {self.harga}"