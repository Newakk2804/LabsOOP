#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include "Stack.h"

class BracketChecker {
private:
	Stack stack;

	// метод проверки является ли символ открыващей скобки
	bool isOpenBracket(char c);

	// метод проверки является ли символ закрывающей скобки
	bool isCloseBracket(char c);

	// метод проверки соответствия пар октрывающей и закрывающей скобок
	bool isMatchingPair(char open, char close);

public:
	// конструктор инициализирующмй стек
	BracketChecker();

	// метод проверки строки на правильность расстановки скобок
	bool check(const std::string& expression);

	// метод проверки строки из файла на правильность расстановки скобок
	bool checkFromFile(const std::string& filename);
};