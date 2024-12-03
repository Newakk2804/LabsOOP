#include "Matrix.h"

// конструктор по умолчанию
Matrix::Matrix(int n) : size(n), elements(n, std::vector<double>(n, 0)) {}

// конструктор копирования
Matrix::Matrix(const Matrix& other) :size(other.size), elements(other.elements) {}

// метод вывода матрицы
void Matrix::input() {
	std::cout << "Enter elements for matrix: " << size << "X" << size << ":\n";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			std::cin >> elements[i][j];
		}
	}
}

// метод вывода матрицы
void Matrix::display() const {
	for (const auto& row : elements) {
		for (double el : row) {
			std::cout << el << " ";
		}
		std::cout << std::endl;
	}
}

// перегрузка оператора сложения
Matrix Matrix::operator+(const Matrix& other) const {
	Matrix result(size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result.elements[i][j] = elements[i][j] + other.elements[i][j];
		}
	}
	return result;
}

// перегрузка оператора вычитания
Matrix Matrix::operator-(const Matrix& other) const {
	Matrix result(size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result.elements[i][j] = elements[i][j] - other.elements[i][j];
		}
	}
	return result;
}

// перегрузка оператора умножения
Matrix Matrix::operator*(const Matrix& other) const {
	Matrix result(size);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; ++k) {
				result.elements[i][j] = elements[i][k] * other.elements[k][j];
			}
		}
	}
	return result;
}

// метод вычисления нормы матрицы
double Matrix::norm() const {
	double sum = 0;
	for (const auto& row : elements) {
		for (double el : row) {
			sum += el * el;
		}
	}
	return std::sqrt(sum);
}

// метод возведения матрицы в квадрат
void Matrix::square() {
	*this = *this * *this;
}

// метод получения размера матрицы
int Matrix::getSize() const {
	return size;
}

void squareMatrix(Matrix& matrix) {
	matrix.square();
}