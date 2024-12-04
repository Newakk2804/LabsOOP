#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <stack>

class NumberSeries {
private:
	std::vector<double> numbers;

public:
	// метод добавления числа в последовательность
	void addNumber(double number);

	// метод поиска и вывода самой длиной возрастающей последовательности
	void printIncreasingSeries();

	// метод вывода чисел из файла
	void inputFromFile(const std::string& filename);

	// метод вывода чисел с клавиатуры
	void inputFromConsole();
};