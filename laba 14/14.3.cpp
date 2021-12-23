#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
	int N, K = 0, S = 0;
	cout << "Введите значение N"<<endl;
	cin >> N;
	if (N<1){
	    cout<<"Неверно";
	    return 0;
	}
	else
	
	while (S<N)
	{
		K+=1;
		S+=K;
	}
	cout<<"Наименьшее="<<K<<endl<<"Сумма="<<S<<endl;
}
