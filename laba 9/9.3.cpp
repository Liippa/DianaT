#include <iostream>

using namespace std;

int main()
{
	int K, N, m;
	cout << "Vvedite K i N" << endl;
	cin >> K >> N;
	    if ((0 < K) && (K < 366) && (0 < N) && (N < 8)) {
		    N = N - 2;
		    m = ((K + N) % 7) + 1;
		    cout << "Nomer dnya nedeli= " << m;
	    }
	        else {
		cout << "Neverno";
	}
}