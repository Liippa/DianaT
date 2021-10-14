#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double A, B;
	cout<<"Vvedite znachenye A"<<endl;
	cin>>A;
	B=pow(A,2)*pow(A,2)*pow(A,4);
	B=pow(A,2)*pow(A,2)*pow(A,2)*pow(A,2);
	cout<<"Otvet="<<B;
}