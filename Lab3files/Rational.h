#include <string>
class Rational
{
private:
	int Numerator;
	int Denominator;

public:
	Rational(int n, int d= 1)
	{
		Numerator = n;
		Denominator = d;
	}
	
	

	int setNumerator() const
	{
		return Numerator;
	}
	int setDenominator()const
	{
		return Denominator;
	}
	double reduce (int n, int d)
	{
		return n / d;

	}

	// this will find the greatest common multiply redusing fraction to the smallest term.
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

string toString(char n, char d);

};