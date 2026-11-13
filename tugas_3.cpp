
#include <iostream>
using namespace std;

// Variabel
int soto, rawon, pecel;
int teh, kopi;
int total;
int ulang;

// FUNCTION VOID: Menampilkan menu
void tampilkanMenu() {
    cout << "=================================" << endl;
    cout << "          MENU MAKANAN" << endl;
    cout << "=================================" << endl;
    cout << "1. Soto  : Rp15.000" << endl;
    cout << "2. Rawon : Rp20.000" << endl;
    cout << "3. Pecel : Rp10.000" << endl;
    cout << "=================================" << endl;

    cout << endl;

    cout << "=================================" << endl;
    cout << "          MENU MINUMAN" << endl;
    cout << "=================================" << endl;
    cout << "1. Teh   : Rp3.000" << endl;
    cout << "2. Kopi  : Rp5.000" << endl;
    cout << "=================================" << endl;
}

// FUNCTION VOID: Input pesanan
void inputPesanan() {
    cout << endl;
    cout << "Jumlah Soto  (0 jika tidak beli): ";
    cin >> soto;

    cout << "Jumlah Rawon (0 jika tidak beli): ";
    cin >> rawon;

    cout << "Jumlah Pecel (0 jika tidak beli): ";
    cin >> pecel;

    cout << "Jumlah Teh   (0 jika tidak beli): ";
    cin >> teh;

    cout << "Jumlah Kopi  (0 jika tidak beli): ";
    cin >> kopi;
}

// FUNCTION VOID: Menghitung total
void hitungTotal() {
    total = (soto * 15000) +
            (rawon * 20000) +
            (pecel * 10000) +
            (teh * 3000) +
            (kopi * 5000);
}

// FUNCTION VOID: Menampilkan struk
void tampilkanStruk() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "          STRUK PEMBELIAN" << endl;
    cout << "=================================" << endl;

    cout << "Soto  : " << soto << " x Rp15.000" << endl;
    cout << "Rawon : " << rawon << " x Rp20.000" << endl;
    cout << "Pecel : " << pecel << " x Rp10.000" << endl;
    cout << "Teh   : " << teh << " x Rp3.000" << endl;
    cout << "Kopi  : " << kopi << " x Rp5.000" << endl;

    cout << "---------------------------------" << endl;
    cout << "Total : Rp" << total << endl;
    cout << "=================================" << endl;
}

// PROGRAM UTAMA
int main() {

    cout << "SELAMAT DATANG DI KASIR" << endl;

    do {
        // Reset jumlah pesanan
        soto = 0;
        rawon = 0;
        pecel = 0;
        teh = 0;
        kopi = 0;

        tampilkanMenu();
        inputPesanan();
        hitungTotal();
        tampilkanStruk();

        cout << endl;
        cout << "Apakah ingin memesan lagi?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;
        cout << "Pilih: ";
        cin >> ulang;

    } while (ulang == 1);

    cout << endl;
    cout << "Terima kasih sudah berbelanja!" << endl;

    return 0;
}
