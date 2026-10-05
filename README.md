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
![Tampilan Awal](dokumentasi/cpp/Tampilan%20Awal.png)

### Tambah Data
![Tambah Data CPP](dokumentasi/cpp/Tambah%20Data.png)

### Tampilan Akhir
![Tampilan Akhir](dokumentasi/cpp/Tampilan%20Akhir.png)


## Java

### Tampilan Awal
![Tampilan Awal](dokumentasi/java/Tampilan%20Awal.png)

### Tambah Data
![Tambah Data Java](dokumentasi/java/Tambah%20Data.png)

### Tampilan Akhir
![Tampilan Akhir](dokumentasi/java/Tampilan%20akhir.png)


## Python

### Tampilan Awal
![Tampilan Awal](dokumentasi/python/Tampilan%20Awal.png)

### Tambah Data
![Tambah Data Python](dokumentasi/python/Tambah%20Data%20.png)

### Tampilan Akhir
![Tampilan Akhir](dokumentasi/python/Tampilan%20Akhir.png)

