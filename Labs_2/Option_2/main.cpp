#include "Fraction.h"

int main() {
	Fraction f1 = Fraction(1, 2);
	Fraction f2 = Fraction(3, 4);
	Fraction f3 = Fraction(5, 6);

	std::vector<Fraction> vectF{ f1, f2, f3 };

	std::cout << "Original fractions:" << std::endl;
	for (auto frac : vectF) {
		frac.show();
	}

	std::cout << std::endl;

	modifyFractionVect(vectF);

	std::cout << "After changing fractions: " << std::endl;
	for (auto frac : vectF) {
		frac.show();
	}

	return 0;
}