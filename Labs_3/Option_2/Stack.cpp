#include "Stack.h"

// ����� ���������� �������� � ����
void Stack::push(int value) {
	stack.push(value);
}

// ����� �������� � ��������� �������� �������� �����
int Stack::pop() {
	if (stack.empty()) {
		throw std::out_of_range("Stack is empty");
	}

	int value = stack.top();
	stack.pop();
	return value;
}

// ����� �������� ���� �� ����
bool Stack::isEmpty() const {
	return stack.empty();
}

// ����� ��������� ���������� ��������� � �����
size_t Stack::size() const {
	return stack.size();
}

// ����� ������ ��������� �����
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