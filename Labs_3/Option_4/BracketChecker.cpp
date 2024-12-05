#include "BracketChecker.h"

// ����������� ���������������� ����
BracketChecker::BracketChecker() : stack() {}

// ����� �������� �������� �� ������ ���������� ������
bool BracketChecker::isOpenBracket(char c) {
	return c == '(' || c == '[' || c == '{';
}

// ����� �������� �������� �� ������ ����������� ������
bool BracketChecker::isCloseBracket(char c) {
	return c == ')' || c == ']' || c == ' }';
}

// ����� �������� ������������ ��� ����������� � ����������� ������
bool BracketChecker::isMatchingPair(char open, char close) {
	return (open == '(' && close == ')') ||
		(open == '[' && close == ']') ||
		(open == '{' && close == '}');
}

// ����� �������� ������ �� ������������ ����������� ������
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

// ����� �������� ������ �� ����� �� ������������ ����������� ������
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