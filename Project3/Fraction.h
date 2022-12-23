#pragma once
class Fraction
{
private:
	Fraction(int numerator, int denomerator) {
		_numerator = numerator;
		_denomenator = denomerator;
	}

	int numerator() const {
		return _numerator;
	}

	int denomerator() const {
		return _denomenator;
	}

	int getNumerator() const {
		return _numerator;
	}

	int getDenomerator() const {
		return _denomenator;
	}

	double operator / (Fraction& other) {
		(_numerator * other._denomenator) / (_denomenator * other._numerator);
	}

private:
	int _numerator;
	int _denomenator;

};

//Fraction f1(5, 2);
//Fraction f2(10, 3);
//Fraction f3 = f1/f2;
//f1.operator/(f2)

