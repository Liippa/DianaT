#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double P=3.14, A, R;
	cout<<"Vvod gradusnoj mery (0<A<P*2)"<<endl;
	cin>>A;
	if (A<=0)
{
    cout<<"Neverno";

}
    else if (A>=P*2)
{
    cout<<"Neverno";

}
    else if (A>0)
{
    A=(R*180)/3.14;
    cout<<"Znachenie ugla v gradusah="<<A;

}
}
