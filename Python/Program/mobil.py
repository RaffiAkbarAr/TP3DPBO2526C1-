from kendaraan import Kendaraan

class Mobil(Kendaraan):
    def __init__(self, merk, tahun, jumlahPintu):
        super().__init__(merk, tahun)
        self.jumlahPintu = jumlahPintu

    def tampilkanData(self):
        super().tampilkanData()
        print("Jumlah Pintu :", self.jumlahPintu)
