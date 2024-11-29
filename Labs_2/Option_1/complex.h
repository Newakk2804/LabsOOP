#pragma once
#include <iostream>
#include <vector>

class Complex {
private:
	double real;
	double imag;

public:
	Complex();
	Complex(double real, double imag);

	Complex operator+(const Complex& other) const;
	Complex operator-(const Complex& other) const;
	Complex operator*(const Complex& other) const;
	Complex operator/(const Complex& other) const;

	// �������
	double getReal();
	double getImag();

	// �������
	void setReal(double real);
	void setImag(double imag);

	void show();
};

std::vector<Complex> comVectAdd(std::vector<Complex> vec1, std::vector<Complex> vec2);