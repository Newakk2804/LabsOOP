#pragma once
#include <iostream>
#include <vector>
#include <string>

enum TypePlane {
	Cargo, // грузовой самолет
	Passanger // пассажирский самолет
};

enum Day {
	Monday, // понедельник
	Tuesday, // вторник
	Wednesday, // среда
	Thursday, // четверг
	Friday,  // пятница
	Saturday, // суббота
	Sunday // воскресенье
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
	std::string destination; // пункт назначения
	int flightNumber; // номер рейса
	std::string typePlane; // тип самолета
	Times departureTime; // время вылета
	std::string dayOfWeek; // день недели

public:
	Aeroflot();
	Aeroflot(std::string destination, int flightNumber, TypePlane typePlane, Times departureTime, Day dayOfWeek);

	// геттеры
	std::string getDestination();
	int getFlightNumber();
	std::string getTypePlane();
	Times getDepartureTime();
	std::string getDayOfWeek();

	// сеттеры
	void setDestination(std::string destination);
	void setFlightNumber(int flightNumber);
	void setTypePlane(std::string typePlane);
	void setDepartureTime(Times departureTime);
	void setDayOfWeek(std::string dayOfWeek);

	void show();
};

// список рейсов для заданного пункта назначения
std::vector<Aeroflot> listOfFlightsForAGivenDestination(std::vector<Aeroflot> listAeroflot, std::string givenDestination);

// cписок рейсов для заданного дня недели
std::vector<Aeroflot> listOfFlightsForAGivenDayOfTheWeek(std::vector<Aeroflot> listAeroflot, std::string givenDay);

// список рейсов для заданного дня недели, время вылета для которых больше заданного.
std::vector<Aeroflot> listOfFlightsForAGivenDayOfTheWeekTheDepartureTimeForWhichIsGreaterThanTheSpecifiedOne(
	std::vector<Aeroflot> listAeroflot, std::string givenDay, Times givenTime);