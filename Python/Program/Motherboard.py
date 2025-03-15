from KomponenInternal import KomponenInternal

class Motherboard(KomponenInternal):
    def __init__(self, merk="", nama="", harga=0, jenis_slot="", terpasang=False,
                 chipset="", form_factor=""):
        super().__init__(merk, nama, harga, jenis_slot, terpasang)
        self.chipset = chipset
        self.form_factor = form_factor
    
    # Setter
    def set_chipset(self, chipset):
        self.chipset = chipset
    
    def set_form_factor(self, form_factor):
        self.form_factor = form_factor
    
    # Getter
    def get_chipset(self):
        return self.chipset
    
    def get_form_factor(self):
        return self.form_factor
    
    # Tampilkan Info
    def tampilkan_info(self):
        return f"{super().tampilkan_info()} | Chipset: {self.chipset} | Form Factor: {self.form_factor}"