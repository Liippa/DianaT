#include <iostream>

using namespace std;
 
int main() {
    int A, B, C;
    cout << "Vvedite A B C" << endl;
    cin >> A >> B >> C;
        if (A < B && B < C) {
            cout << "TRUE";
    }
    else {
        cout << "FALSE";
}
}