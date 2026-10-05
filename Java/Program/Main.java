import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        Bengkel bengkel = new Bengkel("Bengkel Wakanda");

        int pilihan;

        do {
            System.out.println("\n===== BENGKEL WAKANDA =====");
            System.out.println("1. Tambah Data");
            System.out.println("2. Tampilkan Semua Data");
            System.out.println("3. Keluar");
            System.out.print("Pilih : ");
            pilihan = input.nextInt();

            if (pilihan == 1) {
                System.out.println("\n===== TAMBAH DATA =====");
                System.out.println("1. Motor");
                System.out.println("2. Mobil");
                System.out.print("Pilih jenis kendaraan : ");
                int jenis = input.nextInt();

                System.out.print("Merk  : ");
                String merk = input.next();

                System.out.print("Tahun : ");
                int tahun = input.nextInt();

                if (jenis == 1) {
                    System.out.print("Jenis Motor : ");
                    String jenisMotor = input.next();

                    Motor motor = new Motor(merk, tahun, jenisMotor);
                    bengkel.tambahMotor(motor);

                    System.out.println("Data motor berhasil ditambahkan.");

                } else if (jenis == 2) {
                    System.out.print("Jumlah Pintu : ");
                    int jumlahPintu = input.nextInt();

                    Mobil mobil = new Mobil(merk, tahun, jumlahPintu);
                    bengkel.tambahMobil(mobil);

                    System.out.println("Data mobil berhasil ditambahkan.");

                } else {
                    System.out.println("Jenis kendaraan tidak tersedia.");
                }

            } else if (pilihan == 2) {
                bengkel.tampilkanSemua();

            } else if (pilihan == 3) {
                System.out.println("Program selesai.");

            } else {
                System.out.println("Pilihan tidak tersedia.");
            }

        } while (pilihan != 3);

        input.close();
    }
}
