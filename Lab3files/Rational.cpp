// This will be were a number is input adn displayed if it is rational
// Ryan Semadeni 1/29/2019

#include <iostream>
using namespace std;
#include < Rational.h>

int main()
{

	cout << "Please a numerator and a denominator and I will simplify it to the smallest fraction" << endl;

	void Rational::reduce()
	{
		int lesser;
		if (Numerator < Denominator)
		{
			lesser = Numerator;
		}
		else
			lesser = Denominator;
		while (Numerator%lesser != 0 && Denominator%lesser != 0)
		{
			lesser--;
		}
		Numerator /= lesser;
		Denominator /= lesser;
	}
	toString(n, d)
	{
		if (Denominator == 1)
		{
			cout << d << "st" << endl;
		}
		else if (Denominator == 2)
		{
			cout << d << "nd" << endl;
		}
		else()
		{
			cout << d << "th" << endl;
		}

	};

	return 0;
};