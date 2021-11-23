#include <iostream>
using namespace std;
 
int main() {
 
    int d, s;
    cout << "Vvedite den goda=";
    cin >> d;
        if (d > 0 && d < 365) {
            s = d % 7;
            cout <<"Nomer dnya nedeli="<< s;
}
    else{
        cout<<"Neverno";
    }
}