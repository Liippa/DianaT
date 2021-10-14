#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double P=3.14, A, R;
	cout<<"Vvod gradusnoj mery (0<A<360)"<<endl;
	cin>>A;
	if (A<=0)
{
    cout<<"Neverno";

}
    else if (A>=360)
{
    cout<<"Neverno";

}
    else if (A>0)
{
    R=(A*3.14)/180;
    cout<<"Znachenie ugla v radianah="<<R;

}
}
