#include <iostream>
using namespace std;
 
int main() {

    int a, b, c;
    cout << "Vvedite A B C" << endl;
    cin >> a >> b >> c;
 
        if ((a+b) > c && (a+c) > b && (b+c) > a) {
        cout << "TRUE";
 }
    else {
    cout << "FALSE"; 
 }
}