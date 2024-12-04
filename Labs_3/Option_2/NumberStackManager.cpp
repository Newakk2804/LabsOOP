#include "NumberStackManager.h"

// метод ввода чисел в стек с клавиатуры
void NumberStackManager::inputStack(int stackNumber) {
	std::cout << "Enter non-decreasing sequence for stack " << stackNumber << " (type 'end' to finish):" << std::endl;
	int number;
	while (std::cin >> number) {
		stack1.push(number);
	}

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// метод ввода чисел в стек из файла
void NumberStackManager::inputStackFromFile(int stackNumber, const std::string& filename) {
	std::fstream file(filename);
	int number;

	while (file >> number) {
		if (stackNumber == 1) {
			stack1.push(number);
		}
		else {
			stack2.push(number);
		}
	}
	file.close();
}

// метод слияния двух стеков в один неубывающий стек
void NumberStackManager::mergeStacks() {
	std::vector<int> temp1, temp2;

	while (!stack1.isEmpty()) {
		temp1.push_back(stack1.pop());
	}
	while (!stack2.isEmpty()) {
		temp2.push_back(stack2.pop());
	}

	size_t i = 0, j = 0;
	while (i < temp1.size() && j < temp2.size()) {
		if (temp1[i] <= temp2[i]) {
			mergedStack.push(temp1[i++]);
		}
		else {
			mergedStack.push(temp2[j++]);
		}
	}

	while (i < temp1.size()) {
		mergedStack.push(temp1[i++]);
	}
	while (j < temp2.size()) {
		mergedStack.push(temp2[j++]);
	}
}

// метод вывода слитого стека
void NumberStackManager::printMergedStack() const {
	std::cout << "Merged Stack (Non-decreasing order): ";
	mergedStack.print();
}