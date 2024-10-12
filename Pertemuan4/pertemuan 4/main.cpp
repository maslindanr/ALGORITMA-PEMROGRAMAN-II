#include <iostream>
using namespace std;


int main()
{
    int x;
    cout << "Masukkan Angka: ";
    cin >> x;

    if (x % 2 == 0){
        cout << "Angka tersebut GENAP" << endl;
    }else{
        cout << "Angka tersebut GANJIL" << endl;
    }

    cout << "=========================" << endl;

    if (x % 3 == 0){
        cout << "Angka tersebut kelipatan 3" << endl;
    }else{
        cout << "Angka tersebut BUKAN kelipatan 3" << endl;
    }

    return 0;
}
