#include <iostream>

using namespace std;

int main() { 
    setlocale(LC_ALL, "Russian");
    int a;
    cout<<"Введите a"<<endl;
    cin>>a;

    if ((a<10) && (a>=1)) {
    if (a%2==0){
        cout<<"Однозначное, чётное";
    }
    else {
        cout<<"Однозначное, нечётное";
    }
}
    else if ((a<100) && (a>=10)) {
    if (a%2==0){
        cout<<"Двухзначное, чётное";
    }
    else {
        cout<<"Двухзначное, нечётное";
    }
}
    else if ((a<1000) && (a>=100)) {
    if (a%2==0){
        cout<<"Трёхзначное, чётное";
    }
    else {
        cout<<"Трёхзначное, нечётное";
}
}

        else {
    cout<<"Неверно";
}
}