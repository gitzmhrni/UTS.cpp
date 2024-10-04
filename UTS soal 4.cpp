#include <iostream>
using namespace std;

int main() {
    int angka;

    // Meminta input dari pengguna
    cout << "Masukkan angka: ";
    cin >> angka;

    cout << "Bilangan ganjil:\n";
    for (int i = 1; i < angka; i += 2) {
        cout << i << endl;
    }

    cout << "Bilangan genap:\n";
    for (int i = 0; i < angka; i += 2) {
        cout << i << endl;
    }

    return 0;
}
