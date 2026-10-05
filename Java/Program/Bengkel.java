import java.util.ArrayList;

public class Bengkel {
    private String namaBengkel;
    private ArrayList<Motor> daftarMotor;
    private ArrayList<Mobil> daftarMobil;

    public Bengkel(String namaBengkel) {
        this.namaBengkel = namaBengkel;
        this.daftarMotor = new ArrayList<>();
        this.daftarMobil = new ArrayList<>();
    }

    public void tambahMotor(Motor motor) {
        daftarMotor.add(motor);
    }

    public void tambahMobil(Mobil mobil) {
        daftarMobil.add(mobil);
    }

    public void tampilkanSemua() {
        System.out.println("\n===== SEMUA DATA KENDARAAN =====");

        System.out.println("\n===== DATA MOTOR =====");

        if (daftarMotor.isEmpty()) {
            System.out.println("Belum ada data motor.");
        } else {
            for (int i = 0; i < daftarMotor.size(); i++) {
                System.out.println();
                System.out.println("Motor ke-" + (i + 1));
                daftarMotor.get(i).tampilkanData();
            }
        }

        System.out.println("\n===== DATA MOBIL =====");

        if (daftarMobil.isEmpty()) {
            System.out.println("Belum ada data mobil.");
        } else {
            for (int i = 0; i < daftarMobil.size(); i++) {
                System.out.println();
                System.out.println("Mobil ke-" + (i + 1));
                daftarMobil.get(i).tampilkanData();
            }
        }
    }
}
