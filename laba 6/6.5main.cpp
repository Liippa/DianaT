#include <iostream>
#include <math.h> 

using namespace std;


int main() 
{

    double x,y;
    
    cout<<"Vvedite x"<<endl;
    cin>>x;
    y=4*pow(x-3,6)-7*pow(x-3,3)+2;
    cout<<"Znachenie funkcii="<<y;
}