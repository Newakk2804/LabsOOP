#include "Stack.h"

// ����� ���������� �������� � ����
void Stack::push(char c) {
	data.push(c);
}

// ����� �������� �������� �������� � �����
void Stack::pop() {
	if (!data.empty()) {
		data.pop();
	}
}

// ����� ����������� �������� �������� �� �����
char Stack::top() {
	return data.empty() ? '\0' : data.top();
}

// ����� �������� ���� �� ����
bool Stack::isEmpty() {
	return data.empty();
}