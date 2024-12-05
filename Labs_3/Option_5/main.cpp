#include <string>
#include "LinkedList.h"

int main() {
	LinkedList list;

	std::cout << "Enter real numbers (entry 'q' to complete entry):" << std::endl;
	std::string input;

	while (true) {
		std::getline(std::cin, input);
		if (input == "q") break;
		try {
			double value = std::stod(input);
			list.add(value);
		}
		catch (std::invalid_argument&) {
			std::cout << "Invalid input. Try again." << std::endl;
		}
	}

	std::cout << "Original list(non - decreasing sequence): ";
	list.print();

	list.reverse();
	std::cout << "Reversed list(non - increasing sequence): ";
	list.print();

	std::string filename;
	std::cout << "Enter name file for enter numbers: ";
	std::getline(std::cin, filename);
	std::fstream file(filename);

	if (file.is_open()) {
		double value;
		while (file >> value) {
			list.add(value);
		}
		file.close();
	}
	else {
		std::cerr << "Failed to open file: " << filename << std::endl;
	}

	std::cout << "List after loading from file (non-decreasing sequence): ";
	list.print();

	list.reverse();
	std::cout << "Reversed list after loading(non - increasing sequence): ";
	list.print();

	return 0;
}