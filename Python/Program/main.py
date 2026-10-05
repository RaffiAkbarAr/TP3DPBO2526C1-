from bengkel import Bengkel
from motor import Motor
from mobil import Mobil

bengkel = Bengkel("Bengkel Wakanda")

while True:
    print("\n===== BENGKEL WAKANDA =====")
    print("1. Tambah Data")
    print("2. Tampilkan Semua Data")
    print("3. Keluar")

    pilihan = input("Pilih : ")

    if pilihan == "1":
        print("\n===== TAMBAH DATA =====")
        print("1. Motor")
        print("2. Mobil")

        jenis = input("Pilih jenis kendaraan : ")

        merk = input("Merk  : ")
        tahun = int(input("Tahun : "))

        if jenis == "1":
            jenisMotor = input("Jenis Motor : ")

            motor = Motor(merk, tahun, jenisMotor)
            bengkel.tambahMotor(motor)

            print("Data motor berhasil ditambahkan.")

        elif jenis == "2":
            jumlahPintu = int(input("Jumlah Pintu : "))

            mobil = Mobil(merk, tahun, jumlahPintu)
            bengkel.tambahMobil(mobil)

            print("Data mobil berhasil ditambahkan.")

        else:
            print("Jenis kendaraan tidak tersedia.")

    elif pilihan == "2":
        bengkel.tampilkanSemua()

    elif pilihan == "3":
        print("Program selesai.")
        break

    else:
        print("Pilihan tidak tersedia.")
