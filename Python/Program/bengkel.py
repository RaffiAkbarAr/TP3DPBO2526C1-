class Bengkel:
    def __init__(self, namaBengkel):
        self.namaBengkel = namaBengkel
        self.daftarMotor = []
        self.daftarMobil = []

    def tambahMotor(self, motor):
        self.daftarMotor.append(motor)

    def tambahMobil(self, mobil):
        self.daftarMobil.append(mobil)

    def tampilkanSemua(self):
        print("\n===== SEMUA DATA KENDARAAN =====")

        print("\n===== DATA MOTOR =====")

        if len(self.daftarMotor) == 0:
            print("Belum ada data motor.")
        else:
            for i, motor in enumerate(self.daftarMotor):
                print()
                print("Motor ke-", i + 1)
                motor.tampilkanData()

        print("\n===== DATA MOBIL =====")

        if len(self.daftarMobil) == 0:
            print("Belum ada data mobil.")
        else:
            for i, mobil in enumerate(self.daftarMobil):
                print()
                print("Mobil ke-", i + 1)
                mobil.tampilkanData()
