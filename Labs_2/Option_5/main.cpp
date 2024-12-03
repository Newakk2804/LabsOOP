#include "Polynom.h"

int main() {
	int n;
	std::cout << "Enter count polynoms: ";
	std::cin >> n;

	std::vector<Polynom> polynoms(n);

	for (int i = 0; i < n; i++) {
		int degree;
		std::cout << "Enter degree polynom #" << (i + 1) << ": ";
		std::cin >> degree;

		std::vector<double> coeffs(degree + 1);
		std::cout << "Enter coefficients (from oldest to youngest): ";
		for (int j = degree; j >= 0; j--) {
			std::cin >> coeffs[j];
		}
		polynoms[i] = Polynom(coeffs);
	}

	Polynom result = sumPolynoms(polynoms);
	std::cout << "Sum polynoms: ";
	result.print();

	return 0;
}