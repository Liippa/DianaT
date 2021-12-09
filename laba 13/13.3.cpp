#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int N, sum, c;
    cout << "Введите N=";
    cin >> N;
    c = 1;
    sum = 0;
    if (N <= 0) {
        cout << "Неверно";
        return 0;
    }
    else
        while (sum != pow(N, 2)) {
            sum = sum + c;
            if (sum != pow(N, 2)) {
                cout << "Сумма=" << sum << endl;
            }
            c = c + 2;
        }
    cout << "Квадрат N=" << sum << endl;
}