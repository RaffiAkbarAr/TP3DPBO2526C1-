public class Kendaraan {
    protected String merk;
    protected int tahun;

    public Kendaraan(String merk, int tahun) {
        this.merk = merk;
        this.tahun = tahun;
    }

    public void tampilkanData() {
        System.out.println("Merk  : " + merk);
        System.out.println("Tahun : " + tahun);
    }
}
