#include "Stack.h"

// ����� ���������� ������� � ����
void Stack::push(char c) {
	data.push(c);
}

// ����� �������� �������� �������� �� �����
void Stack::pop() {
	if (!data.empty()) {
		data.pop();
	}
}

// ����� �������� �������� �������� �� �����
char Stack::top() {
	return data.empty() ? '\0' : data.top();
}

// ����� �������� ���� �� ����
bool Stack::isEmpty() {
	return data.empty();
}

// ����� �������� ���������� ��������� � �����
int Stack::size() {
	return data.size();
}

// ����� �������������� ��������� ������������ ���������
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