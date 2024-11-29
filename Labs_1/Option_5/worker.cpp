#include "worker.h"

int getNowYear() {
	std::time_t t = std::time(nullptr);
	std::tm now;
	localtime_s(&now, &t);
	int year = now.tm_year + 1900;

	return year;
}

Worker::Worker(std::string fio, std::string jobTitle, int yearOfEmployment, int salary) {
	this->fio = fio;
	this->jobTitle = jobTitle;
	this->yearOfEmpoyment = yearOfEmployment;
	this->salary = salary;
}

// геттеры
std::string Worker::getFio() {
	return this->fio;
}

std::string Worker::getJobTitle() {
	return this->jobTitle;
}

int Worker::getYearOfEmployment() {
	return this->yearOfEmpoyment;
}

int Worker::getSalary() {
	return this->salary;
}

// сеттеры
void Worker::setFio(std::string fio) {
	this->fio = fio;
}

void Worker::setJobTitle(std::string jobTitle) {
	this->jobTitle = jobTitle;
}

void Worker::setYearOfEmployment(int yearOfEmployment) {
	this->yearOfEmpoyment = yearOfEmployment;
}

void Worker::setSalary(int salary) {
	this->salary = salary;
}

void Worker::show() {
	std::cout << "Fio: " << this->fio << std::endl;
	std::cout << "Job title: " << this->jobTitle << std::endl;
	std::cout << "Year of employment: " << this->yearOfEmpoyment << std::endl;
	std::cout << "Salary: " << this->salary << " $" << std::endl;
}

// список работников, стаж работы которых больше заданного числа лет
std::vector<Worker> getListWorkerExpMoreThanGivenYear(std::vector<Worker> listWorker, int year) {
	std::vector<Worker> resList;

	for (int i = 0; i < listWorker.size(); i++) {
		int workExp = getNowYear() - listWorker[i].getYearOfEmployment();
		if (workExp > year) {
			resList.push_back(listWorker[i]);
		}
	}

	return resList;
}

// списокк работников, зарплата которых больше заданной
std::vector<Worker> getListWorkerSalaryMoreThanGivenSalary(std::vector<Worker> listWorker, int salary) {
	std::vector<Worker> resList;

	for (int i = 0; i < listWorker.size(); i++) {
		if (listWorker[i].getSalary() > salary) {
			resList.push_back(listWorker[i]);
		}
	}

	return resList;
}

// список работников, определнной должности
std::vector<Worker> getListWorkerGivenJobTitle(std::vector<Worker> listWorker, std::string JobTitle) {
	std::vector<Worker> resList;

	for (int i = 0; i < listWorker.size(); i++) {
		if (listWorker[i].getJobTitle() == JobTitle)
		{
			resList.push_back(listWorker[i]);
		}
	}

	return resList;
}