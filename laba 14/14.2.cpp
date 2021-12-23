#include <iostream>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
	int A, B;
	cout<<"Введите положительные числа A и B"<<endl;
    cin>>A>>B;
    if (A<B | A<0 | B<0) {
        cout<<"Неверно";
        return 0;
    }
    else
    
	while ((A - B) >= 0) {
		A = A - B;
	}
	cout<<"Незанятая часть="<<A<<endl;
}