#pragma once
class Fraction
{
private:
	int numerator;
	int denominator;
public:
	Fraction() {
		this->numerator = 1;
		this->denominator = 2;
	}
	Fraction(int x, int y) {
		this->numerator = x;
		this->denominator = y;
	}
	void showFraction();
	void setNumerator(int x);
	int setDenominator(int x);
	Fraction summFraction(Fraction fract);
	Fraction substractionFraction(Fraction fract);
	Fraction multFraction(Fraction fract);
	Fraction devideFraction(Fraction fract);
};

