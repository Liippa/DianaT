#include <iostream>
#include <math.h>

using namespace std;

int main(){ 
    setlocale(LC_ALL, "Russian");
    double x1, y1, x2, y2, x3, y3, AB, AC, B, C;
    cout << "Введите координаты A" << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты B" << endl;
    cin >> x2 >> y2;
    cout << "Введите координаты C" << endl;
    cin >> x3 >> y3;
    AB=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    AC=sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));

        if (AB!=AC) {
            if (AB<AC) {
        cout<<"B ближе"<<endl<<"Расстояние A до B="<<AB;
    }
    else {
        cout<<"C ближе"<<endl<<"Расстояние A до C="<<AC;
    }
}
  else {
      cout<<"Расстояние АВ=АС="<<AB;
  }
}