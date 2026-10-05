from kendaraan import Kendaraan

class Motor(Kendaraan):
    def __init__(self, merk, tahun, jenisMotor):
        super().__init__(merk, tahun)
        self.jenisMotor = jenisMotor

    def tampilkanData(self):
        super().tampilkanData()
        print("Jenis Motor :", self.jenisMotor)
