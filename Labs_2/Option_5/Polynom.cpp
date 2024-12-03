#include "Polynom.h"

// конструктор по умолчанию
Polynom::Polynom(int degree) :coefficients(degree + 1, 0) {}

// конструктор c заданными коэффициентами
Polynom::Polynom(const std::vector<double>& coeffs) : coefficients(coeffs) {}

// конструктор копирования
Polynom::Polynom(const Polynom& other) : coefficients(other.coefficients) {}

// метод вычисления значения полинома в точке x
double Polynom::evaluate(double x) const {
	double result = 0;
	
	for (int i = 0; i < coefficients.size(); i++) {
		result += coefficients[i] * pow(x, i);
	}
	
	return result;
}

// перегрузка оператора сложения
Polynom Polynom::operator+(const Polynom& other) const {
	size_t maxDegree = std::max(coefficients.size(), other.coefficients.size());
	Polynom result(maxDegree - 1);
	
	for (size_t i = 0; i < maxDegree; i++) {
		double coeff1 = (i < coefficients.size()) ? coefficients[i] : 0;
		double coeff2 = (i < other.coefficients.size()) ? other.coefficients[i] : 0;
		result.coefficients[i] = coeff1 + coeff2;
	}

	return result;
}

// перегрузка оператора вычитания
Polynom Polynom::operator-(const Polynom& other) const {
	size_t maxDegree = std::max(coefficients.size(), other.coefficients.size());
	Polynom result(maxDegree - 1);

	for (size_t i = 0; i < maxDegree; i++) {
		double coeff1 = (i < coefficients.size()) ? coefficients[i] : 0;
		double coeff2 = (i < other.coefficients.size()) ? other.coefficients[i] : 0;
		result.coefficients[i] = coeff1 - coeff2;
	}

	return result;
}

// перегрузка оператора умножения
Polynom Polynom::operator*(const Polynom& other) const {
	size_t resultDegree = coefficients.size() + other.coefficients.size() - 2;
	Polynom result(resultDegree);

	for (size_t i = 0; i < coefficients.size(); i++) {
		for (size_t j = 0; j < other.coefficients.size(); j++) {
			result.coefficients[i + j] += coefficients[i] * other.coefficients[j];
		}
	}

	return result;
}

// перегрузка оператора индексирования
double& Polynom::operator[](int index) {
	return coefficients[index];
}

const double& Polynom::operator[](int index) const {
	return coefficients[index];
}

// перегрузка оператора присваивания
Polynom& Polynom::operator=(const Polynom& other) {
	if (this != &other) {
		coefficients = other.coefficients;
	}
	
	return *this;
}

// перегрузка оператора инкремента
Polynom& Polynom::operator++() {
	for (auto& coeff : coefficients) {
		coeff++;
	}

	return *this;
}

// перегрузка оператора декремента
Polynom& Polynom::operator--() {
	for (auto& coeff : coefficients) {
		coeff--;
	}

	return *this;
}

// метод вывода полинома
void Polynom::print() const {
	for (int i = 0; i < coefficients.size(); i++) {
		if (i > 0 && coefficients[i] >= 0) {
			std::cout << "+ ";
		}
		std::cout << coefficients[i] << "x^" << i << " ";
	}
	std::cout << std::endl;
}

// функция вычисления суммы полиномов в массиве
Polynom sumPolynoms(const std::vector<Polynom>& polynoms) {
	Polynom result;

	for (const auto& poly : polynoms) {
		result = result + poly;
	}

	return result;
}