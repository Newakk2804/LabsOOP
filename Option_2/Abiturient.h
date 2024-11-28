#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <set>

class Abiturient {
private:
	std::string firstName; // Фамилия
	std::string name; // Имя
	std::string lastName; // Отчество
	std::string addres; // адрес
	std::vector<int> assessments; // оценки

public:
	Abiturient();
	Abiturient(std::string firstName, std::string name, std::string lastName, 
		std::string addres, std::vector<int> assessments);

	// геттеры
	std::string getFirstName();
	std::string getName();
	std::string getLastName();
	std::string getAddres();
	std::vector<int> getAssessments();

	// сеттеры
	void setFirstName(std::string firstName);
	void setName(std::string name);
	void setLastName(std::string lastName);
	void setAddres(std::string addres);
	void setAssessments(std::vector<int> assessments);

	// метод вывода информации об аббитуриенте
	void show();
};

std::vector<Abiturient> listOfApplicantsWithUnsatisfactoryGrades(std::vector<Abiturient> listAbitur);

std::vector<Abiturient> listOfApplicantsWhoseScoreisNotLessThanTheSpecifiedOne(
	std::vector<Abiturient> listAbitur,
	int givenSum
);