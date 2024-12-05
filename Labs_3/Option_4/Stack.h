#pragma once
#include <iostream>
#include <stack>

class Stack {
private:
	std::stack<char> data;

public:
	// ����� ���������� �������� � ����
	void push(char c);

	// ����� �������� �������� �������� � �����
	void pop();

	// ����� ����������� �������� �������� �� �����
	char top();

	// ����� �������� ���� �� ����
	bool isEmpty();
};