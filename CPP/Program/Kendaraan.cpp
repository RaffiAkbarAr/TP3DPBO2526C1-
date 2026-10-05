#ifndef KENDARAAN_CPP
#define KENDARAAN_CPP

#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
protected:
    string merk;
    int tahun;

public:
    Kendaraan(string merk, int tahun) {
        this->merk = merk;
        this->tahun = tahun;
    }

    void tampilkanData() {
        cout << "Merk  : " << merk << endl;
        cout << "Tahun : " << tahun << endl;
    }
};

#endif
