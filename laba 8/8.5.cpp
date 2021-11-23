#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A, x, y, o;
    cout << "Vvedite chislo=";
    cin >> A;
        if ((A>99) and (A<1000)){
            x = A / 100;
            y = A % 100;
            o=y*10+x;
            cout<< "Novoe chislo=" << o;
        }
        else {
    cout << "Neverno";
}
}