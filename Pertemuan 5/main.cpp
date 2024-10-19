#include <iostream>

using namespace std;

void caricetak(int x);

int main()
{
    int arr[6] = {2,2,3,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    cout << " Masukkan bilangan X : ";
    cin >> x;
    bool found = false;

    for (int i=0; i<n; i++){
        if (x == arr[i] && x % 2 == 0){
            cout << " X ditemukan " << endl;
            found = true;
            break;
        }
    }

    if (found == false){
        cout << " X tidak ditemukan " << endl;
    }

    return 0;
}
