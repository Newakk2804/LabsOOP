#pragma once
#include <iostream>
#include <vector>
#include <cmath>

class Matrix {
private:
	int size;
	std::vector<std::vector<double>> elements;

public:
	// ����������� �� ���������
	Matrix(int n);

	// ����������� �����������
	Matrix(const Matrix& other);

	// ���� ����� �������
	void input();

	// ����� ������ �������
	void display() const;

	// ���������� ��������� ��������
	Matrix operator+(const Matrix& other) const;

	// ���������� ��������� ���������
	Matrix operator-(const Matrix& other) const;

	// ���������� ��������� ���������
	Matrix operator*(const Matrix& other) const;

	// ����� ���������� ����� �������
	double norm() const;

	// ����� ���������� ������� � �������
	void square();

	// ��������� ������� ������
	int getSize() const;
};

// ������� ���������� i-�� ������� � �������
void squareMatrix(Matrix& matrix);