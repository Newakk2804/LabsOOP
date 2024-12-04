#include "Stack.h"

// метод добавлени€ элемента в стек
void Stack::push(int value) {
	stack.push(value);
}

// метод удалени€ и получени€ верхнего элемента стека
int Stack::pop() {
	if (stack.empty()) {
		throw std::out_of_range("Stack is empty");
	}

	int value = stack.top();
	stack.pop();
	return value;
}

// метод проверки пуст ли стек
bool Stack::isEmpty() const {
	return stack.empty();
}

// метод получени€ количества элементов в стеке
size_t Stack::size() const {
	return stack.size();
}

// метод вывода элементов стека
void Stack::print() const {
	std::stack<int> temp = stack;
	std::vector<int> result;

	while (!temp.empty()) {
		result.push_back(temp.top());
		temp.pop();
	}

	for (size_t i = result.size(); i > 0; i--) {
		std::cout << result[i - 1] << " ";
	}
	std::cout << std::endl;
}