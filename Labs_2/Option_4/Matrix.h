#pragma once
#include <iostream>
#include <vector>
#include <cmath>

class Matrix {
private:
	int size;
	std::vector<std::vector<double>> elements;

public:
	// конструктор по умолчанию
	Matrix(int n);

	// конструктор копирования
	Matrix(const Matrix& other);

	// мето ввода матрицы
	void input();

	// метод вывода матрицы
	void display() const;

	// перегрузка оператора сложения
	Matrix operator+(const Matrix& other) const;

	// перегрузка оператора вычитания
	Matrix operator-(const Matrix& other) const;

	// перегрузка оператора умножения
	Matrix operator*(const Matrix& other) const;

	// метод вычисления нормы матрицы
	double norm() const;

	// метод возведения матрицы в квадрат
	void square();

	// получение размера матрцы
	int getSize() const;
};

// функция возведения i-ой матрицы в квадрат
void squareMatrix(Matrix& matrix);