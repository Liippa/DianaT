#include <iostream>
#include <math.h> 

using namespace std;


int main() 
{

    double x1, x2, y1, y2, a, b, S, P;
    
    cout<<"Vvedite koordinatu x1 i x2"<<endl;
    cin>>x1>>x2;
    cout<<"Vvedite koordinatu y1 i y2"<<endl;
    cin>>y1>>y2;
    a=abs(x2-x1);
    b=abs(y2-y1);
    P=(a+b)*2;
    S=a*b;
    cout<<"Perimetr="<<P<<endl;
    cout<<"Ploshchad'="<<S;
    
}