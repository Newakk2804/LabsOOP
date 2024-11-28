#include "Abiturient.h"

Abiturient::Abiturient() {}

Abiturient::Abiturient(std::string firstName, std::string name, std::string lastName,
	std::string addres, std::vector<int> assessments) {
	this->firstName = firstName;
	this->name = name;
	this->lastName = lastName;
	this->addres = addres;
	this->assessments = assessments;
}

// геттеры
std::string Abiturient::getFirstName() {
	return this->firstName;
}

std::string Abiturient::getName() {
	return this->name;
}

std::string Abiturient::getLastName() {
	return this->lastName;
}

std::string Abiturient::getAddres() {
	return this->addres;
}

std::vector<int> Abiturient::getAssessments() {
	return this->assessments;
}

// сеттеры
void Abiturient::setFirstName(std::string firstName) {
	this->firstName = firstName;
}

void Abiturient::setName(std::string name) {
	this->name = name;
}

void Abiturient::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void Abiturient::setAddres(std::string addres) {
	this->addres = addres;
}

void Abiturient::setAssessments(std::vector<int> assessments) {
	this->assessments = assessments;
}

void Abiturient::show() {
	std::cout << "first name: " << this->firstName << std::endl;
	std::cout << "name: " << this->name << std::endl;
	std::cout << "last name: " << this->lastName << std::endl;
	std::cout << "addres: " << this->addres << std::endl;
	std::cout << "assessments: " << std::endl;
	for (int x : assessments) {
		std::cout << x << " ";
	}
	std::cout << std::endl;
}

// список аббитуриентов имеющих неудовлетворительные оценки 
std::vector<Abiturient> listOfApplicantsWithUnsatisfactoryGrades(std::vector<Abiturient> listAbitur) {
	std::vector<Abiturient> resList;
	bool flag = false;
	
	for (int i = 0; i < listAbitur.size(); i++) {
		for (int j = 0; j < listAbitur[i].getAssessments().size();j++) {
			if (listAbitur[i].getAssessments()[j] <= 2) {
				flag = true;

				if (flag) {
					resList.push_back(listAbitur[i]);
					break;
				}
			}
		}
	}

	return resList;
}

// список абитуриентов, сумма баллов у которых не меньше заданной
std::vector<Abiturient> listOfApplicantsWhoseScoreisNotLessThanTheSpecifiedOne(
	std::vector<Abiturient> listAbitur,
	int givenSum
) {
	std::vector<Abiturient> resList;
	std::vector<int> tempList;
	int sum = 0;

	for (int i = 0; i < listAbitur.size(); i++) {
		for (int j = 0; j < listAbitur[i].getAssessments().size(); j++) {
			sum += listAbitur[i].getAssessments()[j];
		}
		tempList.push_back(sum);
		sum = 0;
	}

	for (int i = 0; i < tempList.size(); i++) {
		if (givenSum < tempList[i]) {
			resList.push_back(listAbitur[i]);
		}
	}

	return resList;
}