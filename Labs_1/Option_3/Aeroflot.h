#pragma once
#include <iostream>
#include <vector>
#include <string>

enum TypePlane {
	Cargo, // �������� �������
	Passanger // ������������ �������
};

enum Day {
	Monday, // �����������
	Tuesday, // �������
	Wednesday, // �����
	Thursday, // �������
	Friday,  // �������
	Saturday, // �������
	Sunday // �����������
};

struct Times {
	int hours;
	int minutes;

	bool operator<(const Times& other) const {
		return this->hours < other.hours;
	}

	bool operator>(const Times& other) const {
		return this->hours > other.hours;
	}

	bool operator<=(const Times& other) const {
		return this->hours <= other.hours;
	}

	bool operator>=(const Times& other) const {
		return this->hours >= other.hours;
	}
};

class Aeroflot {
private:
	std::string destination; // ����� ����������
	int flightNumber; // ����� �����
	std::string typePlane; // ��� ��������
	Times departureTime; // ����� ������
	std::string dayOfWeek; // ���� ������

public:
	Aeroflot();
	Aeroflot(std::string destination, int flightNumber, TypePlane typePlane, Times departureTime, Day dayOfWeek);

	// �������
	std::string getDestination();
	int getFlightNumber();
	std::string getTypePlane();
	Times getDepartureTime();
	std::string getDayOfWeek();

	// �������
	void setDestination(std::string destination);
	void setFlightNumber(int flightNumber);
	void setTypePlane(std::string typePlane);
	void setDepartureTime(Times departureTime);
	void setDayOfWeek(std::string dayOfWeek);

	void show();
};

// ������ ������ ��� ��������� ������ ����������
std::vector<Aeroflot> listOfFlightsForAGivenDestination(std::vector<Aeroflot> listAeroflot, std::string givenDestination);

// c����� ������ ��� ��������� ��� ������
std::vector<Aeroflot> listOfFlightsForAGivenDayOfTheWeek(std::vector<Aeroflot> listAeroflot, std::string givenDay);

// ������ ������ ��� ��������� ��� ������, ����� ������ ��� ������� ������ ���������.
std::vector<Aeroflot> listOfFlightsForAGivenDayOfTheWeekTheDepartureTimeForWhichIsGreaterThanTheSpecifiedOne(
	std::vector<Aeroflot> listAeroflot, std::string givenDay, Times givenTime);