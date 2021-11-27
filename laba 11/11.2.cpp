#include <iostream>

using namespace std;

int main() { 
    setlocale(LC_ALL, "Russian");
    int A, B, C, sum1, sum2, sum3;
    cout << "Введите A B C" << endl;
    cin >> A >> B >> C;

        if ((A<=B) && (A<=C)) {
        sum1=B+C;
            cout << "Сумма=" << sum1;
            return 0;
        }
        else if ((B<=A) && (B<=C)) {
        sum2=A+C;
        cout << "Сумма=" << sum2;
        return 0;
    }
    else 
        sum3=A+B;
        cout << "Сумма=" << sum3;
}