#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double A1, B1, C1, A2, B2, C2, x, y, D;
	cout << "Vvedite A1 B1 C1" << endl;
	cin >> A1 >> B1 >> C1;
	cout << "Vvedite A2 B2 C2" << endl;
	cin >> A2 >> B2 >> C2;
	
	D = A1 * B2 - A2 * B1;
	x = (C1 * B2 - C2 * B1) / D;
	y = (A1 * C2 - A2 * C1) / D;
	cout << "x=" << x << endl << "y=" << y;

}
