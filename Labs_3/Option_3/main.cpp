#include "StackManager.h"

int main() {
	StackManager manager;
	std::string input1, input2;

	std::cout << "Enter symbols for first stack: ";
	std::getline(std::cin, input1);
	manager.addToStack1(input1);

	std::cout << "Enter symbols for second stack: ";
	std::getline(std::cin, input2);
	manager.addToStack2(input2);

	int totalElements = manager.countTotalElements();
	std::cout << "Total quantity elements in stacks: " << totalElements << std::endl;

	manager.restoreStacks();

	std::string filename;
	std::cout << "Enter name file for enter symbols: ";
	std::getline(std::cin, filename);
	std::fstream file(filename);

	if (file.is_open()) {
		std::string line;
		while (std::getline(file, line)) {
			manager.addToStack1(line);
		}
		file.close();
	}
	else {
		std::cerr << "Failed to open file: " << filename << std::endl;
	}

	totalElements = manager.countTotalElements();
	std::cout << "Total quantity elements in stacks after load in file: " << totalElements << std::endl;

	return 0;
}