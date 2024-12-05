#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Stack.h"

class StackManager {
private:
	Stack stack1;
	Stack stack2;

public:
	// ����� ���������� �������� � ���� �� ������
	void addToStack1(const std::string& input);

	void addToStack2(const std::string& input);

	// ����� �������� ������ ���������� ��������� � ����� ������
	int countTotalElements();

	// ����� �������������� ��������� � ����� ������
	void restoreStacks();
};