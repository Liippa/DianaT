#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");

	int A, B;
	cout<<"Введите числа A и B"<< endl;
	cin>>A>> B;
	if (A<=0 | B<=0) {
	    cout<<"Неверно";
	    return 0;
	}
	else
	while (A!=B)
	{
		if (A>B)
		{
			A=A-B;
		}
		else
		{
			B=B-A;
		}
	}
	cout<<"НОД="<<A<<endl;
}