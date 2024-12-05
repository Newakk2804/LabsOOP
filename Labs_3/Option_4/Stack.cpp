#include "Stack.h"

// метод добавления символов в стек
void Stack::push(char c) {
	data.push(c);
}

// метод удаления верхнего элемента в стеке
void Stack::pop() {
	if (!data.empty()) {
		data.pop();
	}
}

// метод возвращения верхнего элемента из стека
char Stack::top() {
	return data.empty() ? '\0' : data.top();
}

// метод проверки пуст ли стек
bool Stack::isEmpty() {
	return data.empty();
}