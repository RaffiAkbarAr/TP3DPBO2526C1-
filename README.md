# TP3DPBO2526C1
Saya Raffi Akbar Ardiansyah dengan NIM 2511604 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Struktur File

```text
D:.
│   diagram.png
│
├───CPP
│   └───Program
│           Bengkel.cpp
│           Kendaraan.cpp
│           main.cpp
│           Mobil.cpp
│           Motor.cpp
│
├───dokumentasi
│   ├───cpp
│   │       Tambah Data.png
│   │       Tampilan Akhir.png
│   │       Tampilan Awal.png
│   │
│   ├───java
│   │       Tambah Data.png
│   │       Tampilan akhir.png
│   │       Tampilan Awal.png
│   │
│   └───python
│           Tambah Data .png
│           Tampilan Akhir.png
│           Tampilan Awal.png
│
├───Java
│   └───Program
│           Bengkel.java
│           Kendaraan.java
│           Main.java
│           Mobil.java
│           Motor.java
│
└───Python
    └───Program
            bengkel.py
            kendaraan.py
            main.py
            mobil.py
            motor.py
```

## Desain Dan Alur Program

<img width="950" height="1100" alt="diagram" src="https://github.com/user-attachments/assets/1fc41445-8adc-43b7-988d-cafccf75a464" />


## 1. Desain Class `Bengkel`

Class `Bengkel` digunakan sebagai tempat untuk menyimpan data kendaraan yang ada di bengkel.

Atribut yang terdapat pada class `Bengkel`:

- `namaBengkel` (String)
- `daftarKendaraan` (List)

`namaBengkel` digunakan untuk menyimpan nama bengkel, sedangkan `daftarKendaraan` digunakan untuk menyimpan kumpulan data kendaraan.

Class `Bengkel` memiliki hubungan **Composition** dengan class `Kendaraan` karena data kendaraan menjadi bagian dari bengkel.

Semua atribut dibuat private dan diakses menggunakan method getter dan setter.


## 2. Desain Class `Kendaraan`

Class `Kendaraan` merupakan parent class yang digunakan sebagai dasar untuk class `Motor` dan `Mobil`.

Atribut yang terdapat pada class `Kendaraan`:

- `merk` (String)
- `tahun` (Int)

`merk` digunakan untuk menyimpan merek kendaraan, sedangkan `tahun` digunakan untuk menyimpan tahun kendaraan.

Class `Kendaraan` memiliki hubungan **Hierarchical Inheritance** dengan class `Motor` dan `Mobil`.

Semua atribut dibuat private dan diakses menggunakan method getter dan setter.


## 3. Desain Class `Motor`

Class `Motor` merupakan child class dari class `Kendaraan`.

Atribut yang terdapat pada class `Motor`:

- `jenisMotor` (String)

`jenisMotor` digunakan untuk menyimpan jenis motor, seperti Matic atau Sport.

Class `Motor` mewarisi atribut dari class `Kendaraan` dan memiliki atribut tambahan berupa `jenisMotor`.

Semua atribut dibuat private dan diakses menggunakan method getter dan setter.


## 4. Desain Class `Mobil`

Class `Mobil` merupakan child class dari class `Kendaraan`.

Atribut yang terdapat pada class `Mobil`:

- `jumlahPintu` (Int)

`jumlahPintu` digunakan untuk menyimpan jumlah pintu yang dimiliki oleh mobil.

Class `Mobil` mewarisi atribut dari class `Kendaraan` dan memiliki atribut tambahan berupa `jumlahPintu`.

Semua atribut dibuat private dan diakses menggunakan method getter dan setter.


# Hubungan Antar Class

Pada program ini terdapat dua konsep hubungan antar class, yaitu **Composition** dan **Hierarchical Inheritance**.

### Composition

Class `Bengkel` memiliki hubungan Composition dengan class `Kendaraan`. Bengkel digunakan untuk menyimpan data kendaraan melalui `daftarKendaraan`.

Dengan adanya daftar kendaraan, sebuah objek `Bengkel` dapat memiliki dan menyimpan beberapa data kendaraan.

### Hierarchical Inheritance

Class `Kendaraan` menjadi parent class dari dua child class, yaitu `Motor` dan `Mobil`.

Struktur inheritance yang digunakan adalah:

Kendaraan
- Motor
- Mobil

Dengan demikian, `Motor` dan `Mobil` dapat menggunakan atribut yang berasal dari class `Kendaraan` serta memiliki atribut khusus masing-masing.


# Array of Object

Program menggunakan Array of Object untuk menyimpan kumpulan data kendaraan.

Data kendaraan yang ditambahkan oleh user akan disimpan ke dalam daftar kendaraan. Dengan menggunakan daftar tersebut, program dapat menyimpan lebih dari satu data kendaraan dan menampilkannya kembali.


# Alur Program

Program dimulai dengan menampilkan menu utama yang terdiri dari tiga pilihan:

1. Tambah Data
2. Tampilkan Semua Data
3. Keluar

Pada pilihan **Tambah Data**, user dapat memilih jenis kendaraan yang ingin ditambahkan, yaitu Motor atau Mobil.

Jika user memilih Motor, user memasukkan:

- Merk
- Tahun
- Jenis Motor

Jika user memilih Mobil, user memasukkan:

- Merk
- Tahun
- Jumlah Pintu

Setelah data dimasukkan, data tersebut disimpan ke dalam daftar kendaraan.

Pada pilihan **Tampilkan Semua Data**, program akan menampilkan data kendaraan yang sudah dimasukkan. Data ditampilkan secara terpisah menjadi:

- Data Motor
- Data Mobil

Jika belum terdapat data, program akan menampilkan keterangan bahwa belum ada data kendaraan.

Pada pilihan **Keluar**, program akan menghentikan program.



## Dokumentasi


## CPP

### Tampilan Awal
<img width="667" height="408" alt="Tampilan Awal" src="https://github.com/user-attachments/assets/3eb4e78d-0934-479d-98f7-6701888c260e" />

### Tambah Data

<img width="314" height="517" alt="Tambah Data" src="https://github.com/user-attachments/assets/ff479c51-29fc-4335-aba3-8cf4f0d4cd73" />

### Tampilan Akhir

<img width="395" height="275" alt="Tampilan Akhir" src="https://github.com/user-attachments/assets/db533173-917b-4f97-ba28-7a397bc1bcf0" />

## Java

### Tampilan Awal

<img width="509" height="368" alt="Tampilan Awal" src="https://github.com/user-attachments/assets/926b3784-a57a-4e65-9d96-cb4280ff0c18" />

### Tambah Data

<img width="478" height="565" alt="Tambah Data" src="https://github.com/user-attachments/assets/708b41dd-ea72-449e-bfcc-a39611b66c0f" />

### Tampilan Akhir

<img width="496" height="371" alt="Tampilan akhir" src="https://github.com/user-attachments/assets/dfe5cdda-5a1a-466f-8d2d-9ddbd4140039" />


## Python

### Tampilan Awal

<img width="491" height="316" alt="Tampilan Awal" src="https://github.com/user-attachments/assets/c426749f-700f-42ad-84cb-193bcc953113" />

### Tambah Data

<img width="428" height="542" alt="Tambah Data " src="https://github.com/user-attachments/assets/064562cb-2cae-4238-b3f0-baef9dbd0a65" />

### Tampilan Akhir

<img width="397" height="219" alt="Tampilan Akhir" src="https://github.com/user-attachments/assets/a632bc4b-94fd-4456-bfee-d2c6a928100f" />



