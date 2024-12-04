#pragma once
#include "Stack.h"

class NumberStackManager {
private:
	Stack stack1;
	Stack stack2;
	Stack mergedStack;

public:
	// метод ввода чисел в стек с клавиатуры
	void inputStack(int stackNumber);

	// метод ввода чисел в стек из файла
	void inputStackFromFile(int stackNumber, const std::string& filename);

	// метод слияния двух стеков в один неубывающий стек
	void mergeStacks();

	// метод вывода слитого стека
	void printMergedStack() const;
};