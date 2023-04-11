#include "Fraction.h"
#include <iostream>

void Fraction::showFraction()
{
	std::cout << this->numerator << "/" << this->denominator << std::endl;
}

void Fraction::setNumerator(int x)
{
	this->numerator = x;
}

int Fraction::setDenominator(int x)
{
	if (x == 0) {
		return 1;
	}
	else {
		this->denominator = x;
		return 0;
	}
}

Fraction Fraction::summFraction(Fraction fract)
{
	Fraction summ;
	if (this->denominator == fract.denominator) {
		summ.setNumerator(this->numerator + fract.numerator);
		summ.setDenominator(this->denominator);
	}
	else {
		summ.setNumerator(this->numerator * fract.denominator + fract.numerator * this->denominator);
		summ.setDenominator(this->denominator * fract.denominator);
	}
	return summ;
}

Fraction Fraction::substractionFraction(Fraction fract)
{
	Fraction substraction;
	if (this->denominator == fract.denominator) {
		substraction.setNumerator(this->numerator - fract.numerator);
		substraction.setDenominator(this->denominator);
	}
	else {
		substraction.setNumerator(this->numerator * fract.denominator - fract.numerator * this->denominator);
		substraction.setDenominator(this->denominator * fract.denominator);
	}
	return substraction;
}

Fraction Fraction::multFraction(Fraction fract)
{
	Fraction mult;
	mult.setNumerator(this->numerator * fract.numerator);
	mult.setDenominator(this->denominator * fract.denominator);
	return mult;
}

Fraction Fraction::devideFraction(Fraction fract)
{
	Fraction devide;
	devide.setNumerator(this->numerator * fract.denominator);
	devide.setDenominator(this->denominator * fract.numerator);
	return devide;
}


