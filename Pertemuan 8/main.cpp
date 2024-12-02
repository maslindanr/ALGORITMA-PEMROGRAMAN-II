#include <iostream>

using namespace std;

int recAdd(int a, int b) {
    if (b <= 0) {
        return a;
    } else {
        return recAdd(a + 1, b - 1);
    }
}

int recPowerOfTwo(int n, int e) {
    if (e == 0) {
        return 1;
    } else {
        return n * recPowerOfTwo(n, e - 1);
    }
}

int main() {
    int a, b;

    cout << " Masukkan bilangan pertama (a) : ";
    cin >> a;
    cout << " Masukkan bilangan kedua (b) : ";
    cin >> b;
    cout << " Hasil penjumlahan " << a << " + " << b << " adalah : " << recAdd(a, b) << endl;

    cout << " ======================================" << endl;

    int n = recAdd(a, b);
    int e = 2;
    cout << " Hasil pangkat 2 dari " << n << " adalah : " << recPowerOfTwo(n, e) << endl;

    return 0;
}
