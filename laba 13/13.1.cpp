#include <iostream>
 
using namespace std;
 
int main()
{
setlocale(LC_ALL, "Rus");
   float c, m;
   cout<<"Стоимость 1кг конфет=";
   cin>>c;
   if (c<=0) {
       cout<<"Неверно";
       return 0;
  }
   else
   cout<<"Стоимость конфет"<<endl;
   for  (m=0.1; m<1.1; m+=0.1)
        cout<<m<<"кг="<<c*m<<endl;
}