#pragma once
#include <iostream>
#include <vector>
#include <cmath>

class Vector {
private:
	std::vector<double> components;

public:
	//  конструктор без параметров
	Vector();

	// конструктор с параметрами
	Vector(std::initializer_list<double> init);

	// конструктор копирования
	Vector(const Vector& other);

	// метод вычисления модуля вектора
	double magnitude() const;

	// метод вычисления скалярного произведения
	double dot(const Vector& other) const;

	// перегрузка оператора сложения
	Vector operator+(const Vector& other) const;

	// перегрузка оператора вычитания
	Vector operator-(const Vector& other) const;

	// перегрузка оператора умножения на скаляр
	Vector operator*(double scalar) const;

	// перегрузка оператора индексирования
	double& operator[](size_t index);

	// метод инкремента
	Vector& operator++();

	// метод декремента
	Vector& operator--();

	// метод отображения вектора
	void display() const;

	// проверка коллинеарности
	static bool are_collinear(const Vector& v1, const Vector& v2);

	// проверка ортогональности
	static bool are_orthogonal(const Vector& v1, const Vector& v2);
};