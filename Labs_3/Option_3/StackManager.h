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
	// метод добавления символов в стек из строки
	void addToStack1(const std::string& input);

	void addToStack2(const std::string& input);

	// метод подсчета общего количества элементов в обоих стеках
	int countTotalElements();

	// метод восстановления элементов в обоих стеках
	void restoreStacks();
};