#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int  b, k;
    cout <<"Vvedite kolichestvo v baitah=";
    cin >> b;
    
    k = (b/1024);
    
    if (b%1024==0)
	{
		cout << "Kolichestvo polnih kbayt=" << k;
	}
	else if (b%1024!=0)
	{
		cout << "Kolichestvo polnih kbayt=" << k + 1;
	}
}
