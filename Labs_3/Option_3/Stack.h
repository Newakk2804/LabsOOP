#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <vector>

class Stack {
private:
	std::stack<char> data;

public:
	// ����� ���������� ������� � ����
	void push(char c);

	// ����� �������� �������� �������� �� �����
	void pop();

	// ����� �������� �������� �������� �� �����
	char top();

	// ����� �������� ���� �� ����
	bool isEmpty();

	// ����� �������� ���������� ��������� � �����
	int size();

	// ����� �������������� ��������� ������������ ���������
	std::vector<char> restore();
};