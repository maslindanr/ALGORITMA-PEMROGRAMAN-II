#include <iostream>
using namespace std;

int x;

int main()
{
    cout << "Isi nilai perulangan : ";
    cin >> x;

    cout << "========================" << endl;

    for (int i = 0; i < x; i++){
        cout << "Hello World!" << endl;
    }

     cout << "========================" << endl;

     int y;
     y = 5;

     if(x > y){
        cout << "X lebih dari Y" << endl;
     }else if(x < y){
        cout << "X kurang dari Y" << endl;
     }else{
        cout << "X sama dengan Y" << endl;
     }

    return 0;
}
