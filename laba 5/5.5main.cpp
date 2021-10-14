#include <iostream>
#include <math.h> 

using namespace std;


int main() 
{

    double x1, x2, x3, y1, y2, y3, a, b, c, S, P;
    
    cout<<"Vvedite vershinu x1, x2 i x3"<<endl;
    cin>>x1>>x2>>x3;
    cout<<"Vvedite vershinu y1, y2 i y3"<<endl;
    cin>>y1>>y2>>y3;
    a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    c=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
    P=(a+b+c)/2;
    S=sqrt(P*(P-a)*(P-b)*(P-c));
    cout<<"Perimetr="<<a+b+c<<endl;
    cout<<"Ploshchad'="<<S;
    
}