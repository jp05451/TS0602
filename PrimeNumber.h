#include<iostream>

class PrimeNumber {
public:
	int get();
	PrimeNumber();
	PrimeNumber(int _value);
	bool prime_test(int input);
	PrimeNumber & operator++();
	PrimeNumber operator++(int);
	PrimeNumber & operator--();
	PrimeNumber operator--(int);

private:
				int value;
};