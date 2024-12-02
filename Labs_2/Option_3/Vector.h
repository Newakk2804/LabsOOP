#pragma once
#include <iostream>
#include <vector>
#include <cmath>

class Vector {
private:
	std::vector<double> components;

public:
	//  ����������� ��� ����������
	Vector();

	// ����������� � �����������
	Vector(std::initializer_list<double> init);

	// ����������� �����������
	Vector(const Vector& other);

	// ����� ���������� ������ �������
	double magnitude() const;

	// ����� ���������� ���������� ������������
	double dot(const Vector& other) const;

	// ���������� ��������� ��������
	Vector operator+(const Vector& other) const;

	// ���������� ��������� ���������
	Vector operator-(const Vector& other) const;

	// ���������� ��������� ��������� �� ������
	Vector operator*(double scalar) const;

	// ���������� ��������� ��������������
	double& operator[](size_t index);

	// ����� ����������
	Vector& operator++();

	// ����� ����������
	Vector& operator--();

	// ����� ����������� �������
	void display() const;

	// �������� ��������������
	static bool are_collinear(const Vector& v1, const Vector& v2);

	// �������� ���������������
	static bool are_orthogonal(const Vector& v1, const Vector& v2);
};