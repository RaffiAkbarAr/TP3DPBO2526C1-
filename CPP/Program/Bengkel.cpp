#ifndef BENGKEL_CPP
#define BENGKEL_CPP

#include <iostream>
#include <vector>
#include "Motor.cpp"
#include "Mobil.cpp"
using namespace std;

class Bengkel {
private:
    string namaBengkel;
    vector<Motor> daftarMotor;
    vector<Mobil> daftarMobil;

public:
    Bengkel(string namaBengkel) {
        this->namaBengkel = namaBengkel;
    }

    void tambahMotor(Motor motor) {
        daftarMotor.push_back(motor);
    }

    void tambahMobil(Mobil mobil) {
        daftarMobil.push_back(mobil);
    }

    void tampilkanSemua() {
        cout << endl;
        cout << "===== SEMUA DATA KENDARAAN =====" << endl;

        cout << endl;
        cout << "===== DATA MOTOR =====" << endl;

        if (daftarMotor.empty()) {
            cout << "Belum ada data motor." << endl;
        } else {
            for (int i = 0; i < (int)daftarMotor.size(); i++) {
                cout << endl;
                cout << "Motor ke-" << i + 1 << endl;
                daftarMotor[i].tampilkanData();
            }
        }

        cout << endl;
        cout << "===== DATA MOBIL =====" << endl;

        if (daftarMobil.empty()) {
            cout << "Belum ada data mobil." << endl;
        } else {
            for (int i = 0; i < (int)daftarMobil.size(); i++) {
                cout << endl;
                cout << "Mobil ke-" << i + 1 << endl;
                daftarMobil[i].tampilkanData();
            }
        }
    }
};

#endif
