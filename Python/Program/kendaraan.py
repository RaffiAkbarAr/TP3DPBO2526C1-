class Kendaraan:
    def __init__(self, merk, tahun):
        self.merk = merk
        self.tahun = tahun

    def tampilkanData(self):
        print("Merk  :", self.merk)
        print("Tahun :", self.tahun)
