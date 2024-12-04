#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <stack>

class Stack {
private:
	std::stack<int> stack;

public:
	// метод добавлени€ элемента в стек
	void push(int value);

	// метод удалени€ и получени€ верхнего элемента стека
	int pop();

	// метод проверки пуст ли стек
	bool isEmpty() const;

	// метод получени€ количества элементов в стеке
	size_t size() const;

	// метод вывода элементов стека
	void print() const;
};