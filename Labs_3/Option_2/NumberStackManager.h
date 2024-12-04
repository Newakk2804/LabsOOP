#pragma once
#include "Stack.h"

class NumberStackManager {
private:
	Stack stack1;
	Stack stack2;
	Stack mergedStack;

public:
	// ����� ����� ����� � ���� � ����������
	void inputStack(int stackNumber);

	// ����� ����� ����� � ���� �� �����
	void inputStackFromFile(int stackNumber, const std::string& filename);

	// ����� ������� ���� ������ � ���� ����������� ����
	void mergeStacks();

	// ����� ������ ������� �����
	void printMergedStack() const;
};