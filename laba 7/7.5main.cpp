#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double A, x, B;
	cout << "Vvedite znachenya A i B tak chtoby A bylo ne ravno 0" << endl;
	cin >> A >> B;
	if (A == 0)
	{
		cout << "Neverno" << endl;
	}
	else
	{
		x = -B / A;
		cout << "x=" << x;
	}
}