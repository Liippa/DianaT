#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");
	int A, B, q;
	cout<<"Введите целые значения A и B"<<endl;
	cin>>A>>B;
	int i = A;
	if (A>B) {
	    cout<<"Неверно";
	}
	else
	cout<<" ";
	for (i; i<=B; i++)
	{
		for (int j=0; j<i; j++)
		{
			cout<<i<<" ";
		}
	}
}