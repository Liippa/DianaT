#include <iostream>

using namespace std;

int main() { 
    setlocale(LC_ALL, "Russian");
    double A, x, y;
    cout << "Введите координаты A"<< endl;
    cin >> x >> y;

    if ((x>0) && (y>0)) {
    cout<<"1 четверть";
    }
    else if (x<0<y) {
        cout<<"2 четверть";
    }
    else if ((x<0) && (y<0)) {
        cout<<"3 четверть";
    }
    else if (x>0>y) {
        cout<<"4 четверть";
    }
}