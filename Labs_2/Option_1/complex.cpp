#include "complex.h"

Complex::Complex() :real(0), imag(0) {}

Complex::Complex(double real, double imag) :real(real), imag(imag) {}

Complex Complex::operator+(const Complex& other) const {
	return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator-(const Complex& other) const {
	return Complex(real - other.real, imag - other.imag);
}

Complex Complex::operator*(const Complex& other) const {
	return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
}

Complex Complex::operator/(const Complex& other) const {
	double denom = other.real * other.real + other.imag * other.imag;
	return Complex((real * other.real + imag * other.imag) / denom, (imag * other.real - real * other.imag) / denom);
}

double Complex::getReal() {
	return this->real;
}

double Complex::getImag() {
	return this->imag;
}

void Complex::setReal(double real) {
	this->real = real;
}

void Complex::setImag(double imag) {
	this->imag = imag;
}

void Complex::show() {
	std::cout << real << ", " << imag << std::endl;
}

std::vector<Complex> comVectAdd(std::vector<Complex> vec1, std::vector<Complex> vec2) {
	if (vec1.size() != vec2.size()) {
		throw std::invalid_argument("Vectors must be of same length");
	}
	
	std::vector<Complex> resVec;
	for (int i = 0; i < vec1.size(); i++) {
		resVec.push_back(vec1[i] + vec2[i]);
	}

	return resVec;
}