#include"PrimeNumber.h"

int PrimeNumber::get()
{
				return value;
}
PrimeNumber::PrimeNumber()
{
				value = 1;
}
PrimeNumber::PrimeNumber(int _value)
{
				value = _value;
}
bool PrimeNumber::prime_test(int input)
{
				int i;
				int delta=1;
				if (input < 2)
								delta = -1;

				for (i = 2; i != input; i+=delta)
				{
								if (input % i == 0)
												break;
				}
				if (i == input)
								return 1;
				else
								return 0;
}

PrimeNumber& PrimeNumber::operator++()//++i
{
				int i;
				for (i = value+1;; i++)
				{
								if (prime_test(i))
												break;
				}
				value = i;
				return *this;
}
PrimeNumber PrimeNumber::operator++(int)//i++
{
				PrimeNumber temp=*this;
				int i;
				for (i = value + 1;; i++)
				{
								if (prime_test(i))
												break;
				}
				value = i;
				return temp;
}
PrimeNumber& PrimeNumber::operator--()//--i
{
				int i;
				for (i = value - 1;; i--)
				{
								if (prime_test(i))
												break;
				}
				value = i;
				return *this;
}
PrimeNumber PrimeNumber::operator--(int)//i--
{
				PrimeNumber temp=*this;
				int i;
				for (i = value - 1;; i--)
				{
								if (prime_test(i))
												break;
				}
				value = i;
				return temp;
}