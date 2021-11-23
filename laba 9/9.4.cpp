#include <iostream>

using namespace std;

int main()
{
	int A, B, C, n, S;
	cout << "Vvedite A B C" << endl;
	cin >> A >> B >> C;
	    if (A>0 && B>0 && C>0) {
	       n = (A/C)*(B/C);
	       S = (A*B-n*C*C);
	       cout << "Kolichestvo kvadratov=" << n << endl << "Ploshad=" << S;
	    }
	  else {
	 cout << "Neverno";
	}
}