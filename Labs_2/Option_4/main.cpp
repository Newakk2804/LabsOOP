#include "Matrix.h"

int main() {
	int n;
	std::cout << "Enter size for matrix: ";
	std::cin >> n;

	std::vector<Matrix> matrices(3, Matrix(n));

	for (int i = 0; i < 3; i++) {
		std::cout << "Matrix #" << (i + 1) << ":\n";
		matrices[i].input();
	}

	for (int i = 0; i < 3; i++) {
		squareMatrix(matrices[i]);
		std::cout << "Square matrix #" << (i + 1) << ":\n";
		matrices[i].display();
		std::cout << "Norm matrix #" << (i + 1) << ": " << matrices[i].norm() << std::endl;
	}

	return 0;
}