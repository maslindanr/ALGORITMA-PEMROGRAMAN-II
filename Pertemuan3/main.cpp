#include <iostream>
using namespace std;

int angka1, angka2;

void min(int angka1, int angka2) {
    if (angka1 < angka2) {
        cout << "Nilai x lebih kecil dari y" << endl;
    } else {
        cout << "Nilai y lebih kecil dari x" << endl;
    }
}

int main() {
    cout << "Masukkan nilai x : ";
    cin >> angka1;

    cout << "Masukkan nilai y : ";
    cin >> angka2;

    cout << "===========================" << endl;

    // Memanggil fungsi min untuk membandingkan angka1 dan angka2
    min(angka1, angka2);

    return 0;
}

