#pragma once
#include <iostream>
#include <stack>

class Stack {
private:
	std::stack<char> data;

public:
	// метод добавления символов в стек
	void push(char c);

	// метод удаления верхнего элемента в стеке
	void pop();

	// метод возвращения верхнего элемента из стека
	char top();

	// метод проверки пуст ли стек
	bool isEmpty();
};