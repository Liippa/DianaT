#include <iostream>
 
using namespace std;
 
int main (){
    setlocale(LC_ALL, "Rus");
    int N, i;
    double p=1;
    cout<<"Введите N=";
    cin>>N;
    if (N<=0){
        cout<<"Неверно";
        return 0;
    }
    else
        for (i=1; i<=N; i++) {
        p=p*(1+0.1*i);
   }
    cout<<"Текущее значение="<<p;
}
