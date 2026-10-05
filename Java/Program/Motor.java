public class Motor extends Kendaraan {
    private String jenisMotor;

    public Motor(String merk, int tahun, String jenisMotor) {
        super(merk, tahun);
        this.jenisMotor = jenisMotor;
    }

    @Override
    public void tampilkanData() {
        super.tampilkanData();
        System.out.println("Jenis Motor : " + jenisMotor);
    }
}
