#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    double x1, y1, x2, y2, D, s;
    
    cout<<"Vvedite x1 i y1"<<endl;
    cin>>x1>>y1;
    cout<<"Vvedite x2 i y2"<<endl;
    cin>>x2>>y2;
 
    D=sqrt(pow(x2-x1,2)+ pow(y2-y1,2));
    cout<<"Rasstoyanie mezhdu dvumya tochkami="<<D;
}

