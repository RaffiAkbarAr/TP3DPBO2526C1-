#ifndef MOTOR_CPP
#define MOTOR_CPP

#include <iostream>
#include <string>
#include "Kendaraan.cpp"
using namespace std;

class Motor : public Kendaraan {
private:
    string jenisMotor;

public:
    Motor(string merk, int tahun, string jenisMotor)
        : Kendaraan(merk, tahun) {
        this->jenisMotor = jenisMotor;
    }

    void tampilkanData() {
        Kendaraan::tampilkanData();
        cout << "Jenis Motor : " << jenisMotor << endl;
    }
};

#endif
