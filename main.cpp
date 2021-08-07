#include "PrimeNumber.h"
#include <iostream>

using namespace std;

int main()
{	
	PrimeNumber p1, p2(17);	
	PrimeNumber a = ++p1;//a=17 p1=17
	PrimeNumber b = p2++;//b=13 p2=11
	cout << a.get() << endl;//a=2
	cout << p1.get() << endl;//p1=2
	cout << b.get() << endl;//b=13
	cout << p2.get() << endl;//p2=17
	return 0;
}
