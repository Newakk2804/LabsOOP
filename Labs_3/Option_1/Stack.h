#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <stack>

class Stack {
private:
	std::stack<double> stack; // стек для хранения действительных чисел

public:
	// метод добавления элемента в стек
	void push(double value);

	// метод удаления и получения верхнего элемента стека
	double pop();

	// метод проверки пуст ли стек
	bool isEmpty() const;

	// метод вывода элементов стека в обратном порядке
	void printReverse() const;
};