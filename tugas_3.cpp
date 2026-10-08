#include <iostream>
using namespace std;

int main() {
    int soto, rawon, pecel;
    int teh, kopi;
    int total;

    cout << "=================================" << endl;
    cout << "          MENU MAKANAN" << endl;
    cout << "=================================" << endl;
    cout << "Soto  : Rp15.000" << endl;
    cout << "Rawon : Rp20.000" << endl;
    cout << "Pecel : Rp10.000" << endl;
    cout << "---------------------------------" << endl;
    cout << "Teh   : Rp3.000" << endl;
    cout << "Kopi  : Rp5.000" << endl;
    cout << "=================================" << endl;

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

    total = (soto * 15000) +
            (rawon * 20000) +
            (pecel * 10000) +
            (teh * 3000) +
            (kopi * 5000);

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

    system("pause");

    return 0;
}
