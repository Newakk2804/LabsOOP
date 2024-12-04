#include "NumberSeries.h"
#include "Stack.h"

// метод добавления числа в последовательность
void NumberSeries::addNumber(double number) {
	numbers.push_back(number);
}

// метод поиска и вывода самой длиной возрастающей последовательности
void NumberSeries::printIncreasingSeries() {
	if (numbers.empty()) {
		std::cout << "No numbers in series." << std::endl;
		return;
	}

	Stack stack;
	std::vector<double> longestSeries;
	std::vector<double> currentSeries;

	for (int i = 0; i < numbers.size(); i++) {
		if (currentSeries.empty() || numbers[i] > currentSeries.back()) {
			currentSeries.push_back(numbers[i]);
		}
		else {
			if (currentSeries.size() > longestSeries.size()) {
				longestSeries = currentSeries;
			}
			currentSeries.clear();
			currentSeries.push_back(numbers[i]);
		}
	}

	if (currentSeries.size() > longestSeries.size()) {
		longestSeries = currentSeries;
	}

	std::cout << "Longest inreasing series: ";
	for (double num : longestSeries) {
		std::cout << num << " ";
		stack.push(num);
	}
	std::cout << std::endl;

	std::cout << "Series in reverse order: ";
	stack.printReverse();
}

// метод вывода чисел из файла
void NumberSeries::inputFromFile(const std::string& filename) {
	std::fstream file(filename);
	double number;

	while (file >> number) {
		addNumber(number);
	}
	file.close();
}

// метод вывода чисел с клавиатуры
void NumberSeries::inputFromConsole() {
	std::cout << "Enter numbers (type 'end' to finish):" << std::endl;
	double number;

	while (std::cin >> number) {
		addNumber(number);
	}

	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}