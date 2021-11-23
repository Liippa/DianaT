#include <iostream>
using namespace std;
 
int main() {
    int A;
    cout << "A=";
    cin >> A;
 
        if (A<0){
        cout << "Neverno";
    }
            else if (A%2==0 && A>9 && A<100) {
            cout << "TRUE";
        }
        else {
        cout << "FALSE";
    }
}