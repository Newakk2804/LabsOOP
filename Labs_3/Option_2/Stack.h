#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <stack>

class Stack {
private:
	std::stack<int> stack;

public:
	// ����� ���������� �������� � ����
	void push(int value);

	// ����� �������� � ��������� �������� �������� �����
	int pop();

	// ����� �������� ���� �� ����
	bool isEmpty() const;

	// ����� ��������� ���������� ��������� � �����
	size_t size() const;

	// ����� ������ ��������� �����
	void print() const;
};