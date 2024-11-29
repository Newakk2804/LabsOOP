#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <ctime>

int getNowYear();

class Worker {
private:
	std::string fio; // Фамилия и инициалы
	std::string jobTitle; // должность
	int yearOfEmpoyment; // год устройства на работу
	int salary; // зарплата

public:
	Worker(std::string fio, std::string jobTitle, int yearOfEmployment, int salary);

	// геттеры
	std::string getFio();
	std::string getJobTitle();
	int getYearOfEmployment();
	int getSalary();

	// сеттеры
	void setFio(std::string fio);
	void setJobTitle(std::string jobTitle);
	void setYearOfEmployment(int yearOfEmployment);
	void setSalary(int salary);

	void show();
};

// список работников, стаж работы которых больше заданного числа лет
std::vector<Worker> getListWorkerExpMoreThanGivenYear(std::vector<Worker> listWorker, int year);

// списокк работников, зарплата которых больше заданной
std::vector<Worker> getListWorkerSalaryMoreThanGivenSalary(std::vector<Worker> listWorker, int salary);

// список работников, определнной должности
std::vector<Worker> getListWorkerGivenJobTitle(std::vector<Worker> listWorker, std::string JobTitle);