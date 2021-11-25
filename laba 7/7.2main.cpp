#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   double a, y;
    cout<<"Vvedite znachenie (0 < α < 2*π) =";
    cin>>a;

    if ((a<0) || (a>6.283185)){ 
        cout<<"Neverno"<<endl;
    }

    else 
    y=(a*180)/3.14;
    cout<<"Znachenie v radianah= "<< y;
    
    
}
