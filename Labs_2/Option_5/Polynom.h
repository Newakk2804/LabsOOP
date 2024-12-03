#pragma once
#include <iostream>
#include <vector>

class Polynom {
private:
	std::vector<double> coefficients;

public:
	// конструктор по умолчанию
	Polynom(int degree = 0);

	// конструктор с заданными коэффициентами
	Polynom(const std::vector<double>& coeffs);

	// конструктор копирования
	Polynom(const Polynom& other);

	// метод вычисления значения полинома в точке х
	double evaluate(double x) const;

	// перегрузка оператора сложения
	Polynom operator+(const Polynom& other) const;

	// перегрузка оператора вычитания
	Polynom operator-(const Polynom& other) const;

	// перегрузка оператора умножения
	Polynom operator*(const Polynom& other) const;

	// перегрузка оператора индексирования
	double& operator[](int index);

	const double& operator[](int index) const;

	// перегрузка оператора присваивания
	Polynom& operator=(const Polynom& other);

	// перегрузка оператора инкремента
	Polynom& operator++();

	// перегрузка оператора декремента
	Polynom& operator--();

	// метод вывода полинома
	void print() const;
};

Polynom sumPolynoms(const std::vector<Polynom>& polynoms);