#include <iostream>

using namespace std;

int main(){ 
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите значение a и b" << endl;
    cin >> a >> b;
        if (a!=b) {
            if (a>b) {
            b=a;
        }
        else {
        a=b;
    }
}
    else {
    a=b=0;
}
    cout << "a="<< a << endl <<"b="<<b;
}