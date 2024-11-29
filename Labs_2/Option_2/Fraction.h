#pragma once
#include <iostream>
#include <vector>

class Fraction {
private:
	int numerator;
	int denominator;

	int gcd(int a, int b) {
		while (b != 0) {
			int temp = b;
			b = a % b;
			a = temp;
		}
		return a;
	}


	void simplify() {
		int gcd_value = gcd(numerator, denominator);
		numerator /= gcd_value;
		denominator /= gcd_value;
		if (denominator < 0) {
			numerator = -numerator;
			denominator = -denominator;
		}
	}

public:
	Fraction(int m, int n);

	Fraction operator+(const Fraction& other) const;
	Fraction operator-(const Fraction& other) const;
	Fraction operator*(const Fraction& other) const;
	Fraction operator/(const Fraction& other) const;
	Fraction operator=(const Fraction& other);
	bool operator==(const Fraction& other) const;
	bool operator!=(const Fraction& other) const;

	void show();
};

void modifyFractionVect(std::vector<Fraction>& fractions);