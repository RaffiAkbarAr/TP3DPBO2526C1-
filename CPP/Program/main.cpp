#include <iostream>
#include "Bengkel.cpp"
using namespace std;

int main() {
    Bengkel bengkel("Bengkel Wakanda");

    int pilihan;

    do {
        cout << endl;
        cout << "===== BENGKEL WAKANDA =====" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Semua Data" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilihan;

        if (pilihan == 1) {
            int jenis;
            string merk;
            int tahun;

            cout << endl;
            cout << "===== TAMBAH DATA =====" << endl;
            cout << "1. Motor" << endl;
            cout << "2. Mobil" << endl;
            cout << "Pilih jenis kendaraan : ";
            cin >> jenis;

            cout << "Merk  : ";
            cin >> merk;

            cout << "Tahun : ";
            cin >> tahun;

            if (jenis == 1) {
                string jenisMotor;

                cout << "Jenis Motor : ";
                cin >> jenisMotor;

                Motor motor(merk, tahun, jenisMotor);
                bengkel.tambahMotor(motor);

                cout << "Data motor berhasil ditambahkan." << endl;
            }
            else if (jenis == 2) {
                int jumlahPintu;

                cout << "Jumlah Pintu : ";
                cin >> jumlahPintu;

                Mobil mobil(merk, tahun, jumlahPintu);
                bengkel.tambahMobil(mobil);

                cout << "Data mobil berhasil ditambahkan." << endl;
            }
            else {
                cout << "Jenis kendaraan tidak tersedia." << endl;
            }
        }
        else if (pilihan == 2) {
            bengkel.tampilkanSemua();
        }
        else if (pilihan == 3) {
            cout << "Program selesai." << endl;
        }
        else {
            cout << "Pilihan tidak tersedia." << endl;
        }

    } while (pilihan != 3);

    return 0;
}
