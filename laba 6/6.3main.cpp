#include <iostream>
#include <math.h> 

using namespace std;


int main() 
{

    double A, B, C, D;
    
    cout<<"Vvedite A, B i C"<<endl;
    cin>>A>>B>>C;
    D=A;
    A=C;
    C=D;
    D=A;
    A=B;
    B=D;
    cout<<"Znachenie A="<<A<<endl;
    cout<<"Znachenie B="<<B<<endl;
    cout<<"Znachenie C="<<C;
}