#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Rus");
    int N, A, sum;
    cout<<"Введите степень N и вещественное число A"<<endl;
    cin>>N>>A;
        if (N<=0) {
        cout << "Неверно";
        return 0;
}
    else
        sum=1;
        for (int i=1; i<=N; i++) {
        sum=sum+pow(A,i);
    }
    cout<<"Сумма="<<sum<<endl;
}