#include "Abiturient.h"

int main() {
	Abiturient ab1 = Abiturient("Razlivanov", "Daniil", "Aleksandrovich", "Kozlova", { 4, 5, 3, 2, 5 });
	Abiturient ab2 = Abiturient("Popov", "Andrei", "Aleksandrovich", "kovaleva", { 4, 5, 3, 4, 5 });
	Abiturient ab3 = Abiturient("Ivanov", "Ivan", "Aleksandrovich", "naberezhnaya", { 1, 3, 4, 2, 5 });
	Abiturient ab4 = Abiturient("Petrov", "Daniil", "Aleksandrovich", "komsomola", { 4, 1, 4, 3, 2 });

	std::vector<Abiturient> listAbitur{ ab1, ab2, ab3, ab4 };

	//ab1.show();

	std::vector<Abiturient> res = listOfApplicantsWhoseScoreisNotLessThanTheSpecifiedOne(listAbitur, 15);

	for (auto x : res) {
		x.show();
		std::cout << std::endl;
	}

	return 0;
}