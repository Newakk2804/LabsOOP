#include "NumberStackManager.h"
#include "Stack.h"

int main() {
	NumberStackManager manager;
	int choice;

	std::cout << "Choose input method:\n1. From console\n2. From file\n";
	std::cin >> choice;

	if (choice == 1) {
		manager.inputStack(1);
	}
	else if (choice == 2) {
		std::string filename;
		std::cout << "Enter filename for Stack 1: ";
		std::cin >> filename;
		manager.inputStackFromFile(1, filename);
	}
	else {
		std::cout << "Invalid choice." << std::endl;
		return 1;
	}

	manager.inputStack(2);

	manager.mergeStacks();
	manager.printMergedStack();

	return 0;
}