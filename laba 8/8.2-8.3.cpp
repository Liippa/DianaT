#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int  A, B, s, x;
    cout <<"Vvedite A i B" << endl;
    cin >> A >> B;
    
    if (A>B)
	{
	    s=A/B;
	    x=A-s*B;
		cout << "Kolichestvo otrezkov=" << s << endl<< "Dlina chasti otrezka A=" << x;
	}
	else
	{
		cout << "Neverno";
	}
}