#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double A, B, C;
	cout<<"Vvedite znachenye A"<<endl;
	cin>>A;
	B=pow(A,3)*pow(A,3)*pow(A,3);
	C=B*pow(A,3)*pow(A, 3);
	cout<<"Otvet="<<C;
}