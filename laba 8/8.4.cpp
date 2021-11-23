#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A, x1, x2;
    cout<<"Vvedite chislo=";
    cin>>A;
 
        if ((A>9) and (A<100)) {
        x1=A/10;
        x2=A-(x1*10);
     cout<<"Posle perestanovki="<<x2<<x1;
}
            else {
      cout<<"Neverno";
 }
}