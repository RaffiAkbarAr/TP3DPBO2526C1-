public class Mobil extends Kendaraan {
    private int jumlahPintu;

    public Mobil(String merk, int tahun, int jumlahPintu) {
        super(merk, tahun);
        this.jumlahPintu = jumlahPintu;
    }

    @Override
    public void tampilkanData() {
        super.tampilkanData();
        System.out.println("Jumlah Pintu : " + jumlahPintu);
    }
}
