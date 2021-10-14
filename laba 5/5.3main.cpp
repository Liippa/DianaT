#include <iostream>
#include <math.h> 

using namespace std;


int main() 
{

    double x1, x2, x3, AC, BC;
    cout<<"Vvedite koordinatu A=";
    cin>>x1;
    cout<<"Vvedite koordinatu B=";
    cin>>x2;
    cout<<"Vvedite koordinatu C=";
    cin>>x3;
    AC=abs(x3-x1);
    BC=abs(x3-x2);
    cout<<"Otrezok AC="<<AC<<endl;
    cout<<"Otrezok BC="<<BC<<endl;
    cout<<"Proizvedenie otrezkov AB i BC="<<AC*BC;

}