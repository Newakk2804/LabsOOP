#include "Vector.h"

// ����������� ��� ����������
Vector::Vector() {}

// ����������� � �����������
Vector::Vector(std::initializer_list<double> init):components(init) {}

// ����������� �����������
Vector::Vector(const Vector& other) : components(other.components) {}

// ����� ���������� ������ �������
double Vector::magnitude() const {
	double sum = 0;
	for (double comp : components) {
		sum += comp * comp;
	}
	
	return std::sqrt(sum);
}

// ����� ���������� ���������� ������������
double Vector::dot(const Vector& other) const {
	if (components.size() != other.components.size()) {
		throw std::invalid_argument("Vectors must be of the same dimension");
	}

	double result = 0;
	
	for (size_t i = 0; i < components.size(); i++) {
		result += components[i] * other.components[i];
	}

	return result;
}

// ���������� ��������� ��������
Vector Vector::operator+(const Vector& other) const {
	if (components.size() != other.components.size()) {
		throw std::invalid_argument("Vectors must be of the same dimension");
	}

	Vector result;
	for (size_t i = 0; i < components.size(); i++) {
		result.components.push_back(components[i] + other.components[i]);
	}

	return result;
}

// ���������� ��������� ���������
Vector Vector::operator-(const Vector& other) const {
	if (components.size() != other.components.size()) {
		throw std::invalid_argument("Vectors must be of the same dimension");
	}

	Vector result;

	for (size_t i = 0; i < components.size(); i++) {
		result.components.push_back(components[i] - other.components[i]);
	}

	return result;
}

// ���������� ��������� ��������� �� ������
Vector Vector::operator*(double scalar) const {
	Vector result;
	for (double comp : components) {
		result.components.push_back(comp * scalar);
	}

	return result;
}

// ���������� ��������� ��������������
double& Vector::operator[](size_t index) {
	return components[index];
}

// ����� ����������
Vector& Vector::operator++() {
	for (double& comp : components) {
		comp++;
	}

	return *this;
}

// ����� ����������
Vector& Vector::operator--() {
	for (double& comp : components) {
		comp--;
	}

	return *this;
}

// ����� ��� ����������� ������� 
void Vector::display() const {
	std::cout << "(";
	for (size_t i = 0; i < components.size(); i++) {
		std::cout << components[i];
		if (i < components.size() - 1) {
			std::cout << ", ";
		}
	}
	std::cout << ")\n";
}

// �������� ��������������
bool Vector::are_collinear(const Vector& v1, const Vector& v2) {
	if (v1.components.size() != v2.components.size()) {
		return false;
	}

	double ratio = (v2.components[0] != 0) ? v1.components[0] / v2.components[0] : 0;
	
	for (size_t i = 0; i < v1.components.size(); i++) {
		if (v2.components[i] != 0 && v1.components[i] / v2.components[i] != ratio) {
			return false;
		}
	}
	return true;
}

// ����� ���������������
bool Vector::are_orthogonal(const Vector& v1, const Vector& v2) {
	return v1.dot(v2) == 0;
}