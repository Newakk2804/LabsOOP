#include "Fraction.h"

Fraction::Fraction(int m = 0, int n = 1) : numerator(m), denominator(n) {
	if (denominator == 0) {
		throw std::invalid_argument("Denominator cannot be zero.");
	}

	simplify();
}

Fraction Fraction::operator+(const Fraction& other) const {
	return Fraction(numerator * other.denominator + other.numerator * denominator,
		denominator * other.denominator);
}

Fraction Fraction::operator-(const Fraction& other) const {
	return Fraction(numerator * other.denominator - other.numerator * denominator,
		denominator * other.denominator);
}

Fraction Fraction::operator*(const Fraction& other) const {
	return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::operator/(const Fraction& other) const {
	if (other.denominator == 0) {
		throw std::invalid_argument("Cannot divide by zero.");
	}
	return Fraction(numerator * other.denominator, denominator * other.numerator);
}

Fraction Fraction::operator=(const Fraction& other) {
	if (this != &other) {
		numerator = other.numerator;
		denominator = other.denominator;
		simplify();
	}
	return *this;
}
bool Fraction::operator==(const Fraction& other) const {
	return numerator == other.numerator && denominator == other.denominator;
}

bool Fraction::operator!=(const Fraction& other) const {
	return !(*this == other);
}

void Fraction::show() {
	std::cout << numerator << "/" << denominator << std::endl;
}

void modifyFractionVect(std::vector<Fraction>& fractions) {
	for (int i = 0; i < fractions.size() - 1; i += 2) {
		fractions[i] = fractions[i] + fractions[i + 1];
	}
}