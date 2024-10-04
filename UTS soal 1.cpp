#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Deklarasi variabel
    string nama;
    string npm;
    float nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    char hurufMutu;

    // Input data mahasiswa
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan NPM Mahasiswa: ";
    getline(cin, npm);

    // Input nilai
    cout << "Masukkan Nilai Absen: ";
    cin >> nilaiAbsen;
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilaiUAS;

    // Hitung nilai akhir
    nilaiAkhir = (nilaiAbsen * 0.1) + (nilaiTugas * 0.2) + (nilaiUTS * 0.3) + (nilaiUAS * 0.4);

    // Tentukan huruf mutu
    if (nilaiAkhir >= 85 && nilaiAkhir < 100) {
        hurufMutu = 'A';
    } else if (nilaiAkhir >= 80) {
        hurufMutu = 'B';
    } else if (nilaiAkhir >= 75) {
        hurufMutu = 'C';
    } else if (nilaiAkhir >= 70) {
        hurufMutu = 'D';
    } else {
        hurufMutu = 'E';
    }

    // Output hasil
    cout << fixed << setprecision(2); // Mengatur presisi output
    cout << "\n--- Hasil ---\n";
    cout << "Nama Mahasiswa: " << nama << endl;
    cout << "NPM Mahasiswa: " << npm << endl;
    cout << "Nilai Absen: " << nilaiAbsen << endl;
    cout << "Nilai Tugas: " << nilaiTugas << endl;
    cout << "Nilai UTS: " << nilaiUTS << endl;
    cout << "Nilai UAS: " << nilaiUAS << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Huruf Mutu: " << hurufMutu << endl;

    return 0;
}
