#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <ctime>

int getNowYear();

class Worker {
private:
	std::string fio; // ������� � ��������
	std::string jobTitle; // ���������
	int yearOfEmpoyment; // ��� ���������� �� ������
	int salary; // ��������

public:
	Worker(std::string fio, std::string jobTitle, int yearOfEmployment, int salary);

	// �������
	std::string getFio();
	std::string getJobTitle();
	int getYearOfEmployment();
	int getSalary();

	// �������
	void setFio(std::string fio);
	void setJobTitle(std::string jobTitle);
	void setYearOfEmployment(int yearOfEmployment);
	void setSalary(int salary);

	void show();
};

// ������ ����������, ���� ������ ������� ������ ��������� ����� ���
std::vector<Worker> getListWorkerExpMoreThanGivenYear(std::vector<Worker> listWorker, int year);

// ������� ����������, �������� ������� ������ ��������
std::vector<Worker> getListWorkerSalaryMoreThanGivenSalary(std::vector<Worker> listWorker, int salary);

// ������ ����������, ����������� ���������
std::vector<Worker> getListWorkerGivenJobTitle(std::vector<Worker> listWorker, std::string JobTitle);