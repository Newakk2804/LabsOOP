#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <stack>

class NumberSeries {
private:
	std::vector<double> numbers;

public:
	// ����� ���������� ����� � ������������������
	void addNumber(double number);

	// ����� ������ � ������ ����� ������ ������������ ������������������
	void printIncreasingSeries();

	// ����� ������ ����� �� �����
	void inputFromFile(const std::string& filename);

	// ����� ������ ����� � ����������
	void inputFromConsole();
};