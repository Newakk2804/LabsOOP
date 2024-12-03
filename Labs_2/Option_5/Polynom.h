#pragma once
#include <iostream>
#include <vector>

class Polynom {
private:
	std::vector<double> coefficients;

public:
	// ����������� �� ���������
	Polynom(int degree = 0);

	// ����������� � ��������� ��������������
	Polynom(const std::vector<double>& coeffs);

	// ����������� �����������
	Polynom(const Polynom& other);

	// ����� ���������� �������� �������� � ����� �
	double evaluate(double x) const;

	// ���������� ��������� ��������
	Polynom operator+(const Polynom& other) const;

	// ���������� ��������� ���������
	Polynom operator-(const Polynom& other) const;

	// ���������� ��������� ���������
	Polynom operator*(const Polynom& other) const;

	// ���������� ��������� ��������������
	double& operator[](int index);

	const double& operator[](int index) const;

	// ���������� ��������� ������������
	Polynom& operator=(const Polynom& other);

	// ���������� ��������� ����������
	Polynom& operator++();

	// ���������� ��������� ����������
	Polynom& operator--();

	// ����� ������ ��������
	void print() const;
};

Polynom sumPolynoms(const std::vector<Polynom>& polynoms);