#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <vector>

class Stack {
private:
	std::stack<char> data;

public:
	// метод добавления символа в стек
	void push(char c);

	// метод удаления верхнего элемента из стека
	void pop();

	// метод возврата верхнего элемента из стека
	char top();

	// метод проверки пуст ли стек
	bool isEmpty();

	// метод возврата количества элементов в стеке
	int size();

	// метод восстановления исходного расположения элементов
	std::vector<char> restore();
};