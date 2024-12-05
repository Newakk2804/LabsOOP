#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include "Stack.h"

class BracketChecker {
private:
	Stack stack;

	// ����� �������� �������� �� ������ ���������� ������
	bool isOpenBracket(char c);

	// ����� �������� �������� �� ������ ����������� ������
	bool isCloseBracket(char c);

	// ����� �������� ������������ ��� ����������� � ����������� ������
	bool isMatchingPair(char open, char close);

public:
	// ����������� ���������������� ����
	BracketChecker();

	// ����� �������� ������ �� ������������ ����������� ������
	bool check(const std::string& expression);

	// ����� �������� ������ �� ����� �� ������������ ����������� ������
	bool checkFromFile(const std::string& filename);
};