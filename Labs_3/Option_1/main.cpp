#include "Stack.h"
#include "NumberSeries.h"

int main() {
	NumberSeries series;
	int choice;

	std::cout << "Choose input method:\n1. From Console\n2. From File\n";
	std::cin >> choice;

	if (choice == 1) {
		series.inputFromConsole();
	}
	else if (choice == 2) {
		std::string filename;
		std::cout << "Enter filename: ";
		std::cin >> filename;
		series.inputFromFile(filename);
	}
	else {
		std::cout << "Invalid choice." << std::endl;
		return 1;
	}

	series.printIncreasingSeries();

	return 0;
}