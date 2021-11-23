#include <iostream>

using namespace std;
 
int main() {
 
    int a, b, c;
    cout << "Vvedite a b c" << endl;
    cin >> a >> b >> c;
 
        if ((a*a == b*b+c*c) || (b*b == a*a+c*c) || (c*c == a*a+b*b)) {
            cout << "TRUE";
    }
    else {
        cout << "FALSE"; 
}
}