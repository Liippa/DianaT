#include <iostream>

using namespace std;
 
int main()
{
    int A;
    cout << "A=";
    cin >> A;
        if ((A/1000 == A%10) && ((A/100)%10 == (A%100)/10)) {
            cout << "TRUE";
        }
            else {
            cout << "FALSE";
        }
}