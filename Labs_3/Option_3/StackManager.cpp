#include "StackManager.h"

// метод добавления символов в стек из строки
void StackManager::addToStack1(const std::string& input) {
	for (char c : input) {
		stack1.push(c);
	}
}

void StackManager::addToStack2(const std::string & input) {
	for (char c : input) {
		stack2.push(c);
	}
}

// метод подсчета общего количества элементов в обоих стеках
int StackManager::countTotalElements() {
	return stack1.size() + stack2.size();
}

// метод восстановления элементов в обоих стеках
void StackManager::restoreStacks() {
	std::cout << "Stack 1 elements: ";
	auto elements1 = stack1.restore();
	
	for (char c : elements1) {
		std::cout << c << " ";
	}

	std::cout << "Stack 2 elements: ";
	auto elements2 = stack2.restore();
	
	for (char c : elements2) {
		std::cout << c << " ";
	}
	std::cout << std::endl;
}