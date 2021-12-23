#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL, "Russian");

	float P, S = 1000;
	int K = 0;
	cout << "Введите процент (P) "<<endl;
	cin >> P;
	if (P<=0 | P>25){
	    cout<<"Неверно";
	    return 0;
	}
	else
	
	while (S <= 1100)
	{
		++K;
		S += S*P/100;
	}
	cout<<"Количество мясяцев "<<K<<endl<<"Итоговый размер вклада S = "<<S<<" руб "<<endl;
}