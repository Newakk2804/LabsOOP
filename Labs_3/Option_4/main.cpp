#include "BracketChecker.h"


int main() {
	BracketChecker checker;

	std::string expression;
	std::cout << "Enter expression for checks: ";
	std::getline(std::cin, expression);
	
	if (checker.check(expression)) {
		std::cout << "Brackets are placed correctly." << std::endl;
	}
	else {
		std::cout << "Brackets are placed not correctly." << std::endl;
	}

	std::string filename;
	std::cout << "Enter file name for checks: ";
	std::getline(std::cin, filename);
	if (checker.checkFromFile(filename)) {
		std::cout << "All brackets in file placed correctly." << std::endl;
	}
	else {
		std::cout << "Some brackets in file placed not correctly." << std::endl;
	}

	return 0;
}