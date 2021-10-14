#include <iostream>
#include <math.h>

using namespace std;

int main() 
{

	double X, A, Y, B, C;
	cout<<"VVedyte ves (kg) i stoimost' konfet"<<endl;
	cin>>X>>A;
	
	if (A<=0)
{
	cout<<"Neverno"<<endl;
}
	if (X<=0)
{
	cout<<"Neverno"<<endl;
}
	
	else
{
	C=A/X;
	cout<<"Vvedyte kolychestvo kg"<<endl;
	cin>>Y;
	B=C*Y;
	cout<<"Cena za 1kg="<<C<<endl<<"Cena za vvedenoe kolychestvo="<<B;
}
}