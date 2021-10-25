#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double V1, V2, S, T, S2;
	cout << "Vvedite skorosti V1 i V2 avtomobiley i rasstoyanie mejdu nimi S" << endl;
	cin >> V1 >> V2 >> S;
	cout << "Vvedite kolichestvo chasov" << endl;
	cin >> T;
	if ((V1 < 0) or (V2 < 0) or (S < 0) or (T < 0))
	{
		cout << "Neverno" << endl;
	}
	else
	{
		S2 = S + (V1 + V2) * T;
		cout << "Rasstoyanie mejdu nimi=" << S2;
	}

}