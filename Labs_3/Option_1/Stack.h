#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <stack>

class Stack {
private:
	std::stack<double> stack; // ���� ��� �������� �������������� �����

public:
	// ����� ���������� �������� � ����
	void push(double value);

	// ����� �������� � ��������� �������� �������� �����
	double pop();

	// ����� �������� ���� �� ����
	bool isEmpty() const;

	// ����� ������ ��������� ����� � �������� �������
	void printReverse() const;
};