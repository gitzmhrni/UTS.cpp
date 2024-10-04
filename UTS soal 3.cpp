#include <iostream>
using namespace std;

// Fungsi untuk penjumlahan
double tambah(double a, double b) {
    return a + b;
}

// Fungsi untuk pengurangan
double kurang(double a, double b) {
    return a - b;
}

// Fungsi untuk perkalian
double kali(double a, double b) {
    return a * b;
}

// Fungsi untuk pembagian
double bagi(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Pembagian dengan nol tidak diperbolehkan." << endl;
        return 0; // mengembalikan 0 jika pembagi nol
    }
}

int main() {
    int pilihan;
    double operand1, operand2;

    cout << "Pilih operasi matematika:" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Masukkan pilihan (1-4): ";
    cin >> pilihan;

    cout << "Masukkan operand pertama: ";
    cin >> operand1;
    cout << "Masukkan operand kedua: ";
    cin >> operand2;

    switch (pilihan) {
        case 1:
            cout << "Hasil dari Penjumlahan untuk " << operand1 << " dan " << operand2 << " adalah " << tambah(operand1, operand2) << endl;
            break;
        case 2:
            cout << "Hasil dari Pengurangan untuk " << operand1 << " dan " << operand2 << " adalah " << kurang(operand1, operand2) << endl;
            break;
        case 3:
            cout << "Hasil dari Perkalian untuk " << operand1 << " dan " << operand2 << " adalah " << kali(operand1, operand2) << endl;
            break;
        case 4:
            cout << "Hasil dari Pembagian untuk " << operand1 << " dan " << operand2 << " adalah " << bagi(operand1, operand2) << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }

    return 0;
}
