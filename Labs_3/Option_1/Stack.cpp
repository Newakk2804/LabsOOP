#include "Stack.h"

// метод добавления элемента в стек
void Stack::push(double value) {
	stack.push(value);
}

// метод удаления и получения верхнего элемента стека
double Stack::pop() {
	if (stack.empty()) {
		throw std::out_of_range("Stack is empty");
	}

	double value = stack.top();
	stack.pop();
	return value;
}

// метод проверки пуст ли стек
bool Stack::isEmpty() const {
	return stack.empty();
}

// метод вывода элементов стека в обратном порядке
void Stack::printReverse() const {
	std::stack<double> temp = stack;
	std::vector<double> result;

	while (!temp.empty()) {
		result.push_back(temp.top());
		temp.pop();
	}

	for (double val : result) {
		std::cout << val << " ";
	}

	std::cout << std::endl;
}