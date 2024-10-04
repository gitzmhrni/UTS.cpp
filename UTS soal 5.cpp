#include <iostream>
using namespace std;

int main() {
    float beratBadan, tinggiBadan, imt;

    // Input berat badan dalam kg dan tinggi badan dalam meter
    cout << "Masukkan berat badan (kg): ";
    cin >> beratBadan;
    cout << "Masukkan tinggi badan (cm): ";
    cin >> tinggiBadan;

    // Menghitung IMT
    imt = beratBadan / (tinggiBadan * tinggiBadan);

    // Menampilkan hasil IMT
    cout << "Indeks Massa Tubuh (IMT) Anda adalah: " << imt << endl;

    // Menentukan kriteria berdasarkan nilai IMT
    if (imt < 18.5) {
        cout << "Kriteria: Berat badan kurang" << endl;
    } else if (imt >= 18.5 && imt < 25) {
        cout << "Kriteria: Berat badan ideal" << endl;
    } else if (imt >= 25 && imt < 30) {
        cout << "Kriteria: Berat badan lebih" << endl;
    } else if (imt >= 30 && imt < 40) {
        cout << "Kriteria: Gemuk" << endl;
    } else {
        cout << "Kriteria: Sangat gemuk" << endl;
    }

    return 0;
}
