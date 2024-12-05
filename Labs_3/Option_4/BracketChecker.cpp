#include "BracketChecker.h"

// конструктор инициализирующмй стек
BracketChecker::BracketChecker() : stack() {}

// метод проверки является ли символ открыващей скобки
bool BracketChecker::isOpenBracket(char c) {
	return c == '(' || c == '[' || c == '{';
}

// метод проверки является ли символ закрывающей скобки
bool BracketChecker::isCloseBracket(char c) {
	return c == ')' || c == ']' || c == ' }';
}

// метод проверки соответствия пар октрывающей и закрывающей скобок
bool BracketChecker::isMatchingPair(char open, char close) {
	return (open == '(' && close == ')') ||
		(open == '[' && close == ']') ||
		(open == '{' && close == '}');
}

// метод проверки строки на правильность расстановки скобок
bool BracketChecker::check(const std::string& expression) {
	for (char c : expression) {
		if (isOpenBracket(c)) {
			stack.push(c);
		}
		else if (isCloseBracket(c)) {
			if (stack.isEmpty() || !isMatchingPair(stack.top(), c)) {
				return false;
			}
			stack.pop();
		}
	}
	
	return stack.isEmpty();
}

// метод проверки строки из файла на правильность расстановки скобок
bool BracketChecker::checkFromFile(const std::string& filename) {
	std::fstream file(filename);
	if (!file.is_open()) {
		std::cerr << "Cannot open file: " << filename << std::endl;
		return false;
	}

	std::string line;
	while (std::getline(file, line)) {
		if (!check(line)) {
			std::cout << "Unmatched brackets in line: " << line << std::endl;
			return false;
		}
	}

	file.close();
	return true;
}