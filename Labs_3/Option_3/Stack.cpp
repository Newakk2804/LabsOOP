#include "Stack.h"

// метод добавления символа в стек
void Stack::push(char c) {
	data.push(c);
}

// метод удаления верхнего элемента из стека
void Stack::pop() {
	if (!data.empty()) {
		data.pop();
	}
}

// метод возврата верхнего элемента из стека
char Stack::top() {
	return data.empty() ? '\0' : data.top();
}

// метод проверки пуст ли стек
bool Stack::isEmpty() {
	return data.empty();
}

// метод возврата количества элементов в стеке
int Stack::size() {
	return data.size();
}

// метод восстановления исходного расположения элементов
std::vector<char> Stack::restore() {
	std::vector<char> elements;
	while (!isEmpty()) {
		elements.push_back(top());
		pop();
	}

	for (auto it = elements.rbegin(); it != elements.rend(); ++it) {
		push(*it);
	}

	return elements;
}