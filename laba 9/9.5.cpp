#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A, B; 
    cout << "Vvedite god=";
    cin >> A;
        if (A>=0) {
            if (A % 100 > 0)  {
                B = A / 100 + 1; 
        }
            else {
        B = A / 100;
    }
    cout << "Vek=" << B;
}
        else {
            cout<<"Neverno";
    }
}