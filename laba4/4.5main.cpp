#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a=5, b=9, sum, dif, x, y;
    sum=abs(a)+abs(b);
    dif=abs(a)-abs(b);
    x=abs(a)*abs(b);
    y=abs(a)/abs(b);
    
    cout<<sum<<endl<<dif<<endl<<x<<endl<<y;
}