#ifndef MOBIL_CPP
#define MOBIL_CPP

#include <iostream>
#include "Kendaraan.cpp"
using namespace std;

class Mobil : public Kendaraan {
private:
    int jumlahPintu;

public:
    Mobil(string merk, int tahun, int jumlahPintu)
        : Kendaraan(merk, tahun) {
        this->jumlahPintu = jumlahPintu;
    }

    void tampilkanData() {
        Kendaraan::tampilkanData();
        cout << "Jumlah Pintu : " << jumlahPintu << endl;
    }
};

#endif
