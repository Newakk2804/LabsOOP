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

	// геттеры
	double getReal();
	double getImag();

	// сеттеры
	void setReal(double real);
	void setImag(double imag);

	void show();
};

std::vector<Complex> comVectAdd(std::vector<Complex> vec1, std::vector<Complex> vec2);