#include "Aeroflot.h"

Aeroflot::Aeroflot(){}

Aeroflot::Aeroflot(std::string destination, int flightNumber, TypePlane typePlane, Times departureTime, Day dayOfWeek) {
	this->destination = destination;
	this->flightNumber = flightNumber;
	this->departureTime = departureTime;

	switch (typePlane)
	{
	case Cargo:
		this->typePlane = "Cargo";
		break;
	case Passanger:
		this->typePlane = "Passanger";
		break;
	default:
		this->typePlane = "unknown";
		break;
	}

	switch (dayOfWeek) {
	case Monday:
		this->dayOfWeek = "Monday";
		break;
	case Tuesday:
		this->dayOfWeek = "Tuesday";
		break;
	case Wednesday:
		this->dayOfWeek = "Wednesday";
		break;
	case Thursday:
		this->dayOfWeek = "Thursday";
		break;
	case Friday:
		this->dayOfWeek = "Friday";
		break;
	case Saturday:
		this->dayOfWeek = "Saturday";
		break;
	case Sunday:
		this->dayOfWeek = "Sunday";
		break;
	default:
		this->dayOfWeek = "unknown";
		break;
	}
}

// геттеры 
std::string Aeroflot::getDestination() {
	return this->destination;
}

int Aeroflot::getFlightNumber() {
	return this->flightNumber;
}

std::string Aeroflot::getTypePlane() {
	return this->typePlane;
}

Times Aeroflot::getDepartureTime() {
	return this->departureTime;
}

std::string Aeroflot::getDayOfWeek() {
	return this->dayOfWeek;
}

// сеттеры

void Aeroflot::setDestination(std::string destination) {
	this->destination = destination;
}

void Aeroflot::setFlightNumber(int flightNumber) {
	this->flightNumber = flightNumber;
}

void Aeroflot::setTypePlane(std::string typePlane) {
	this->typePlane = typePlane;
}

void Aeroflot::setDepartureTime(Times departureTime) {
	this->departureTime = departureTime;
}

void Aeroflot::setDayOfWeek(std::string dayOfWeek) {
	this->dayOfWeek = dayOfWeek;
}

void Aeroflot::show() {
	std::cout << "Aeroflot: " << std::endl;
	std::cout << "Destination: " << this->destination << std::endl;
	std::cout << "Flight number: " << this->flightNumber << std::endl;
	std::cout << "Type plane: " << this->typePlane << std::endl;
	std::cout << "Departure time: " << this->departureTime.hours << ":" << this->departureTime.minutes << std::endl;
	std::cout << "Day of Week: " << this->dayOfWeek << std::endl;
}

// список рейсов для заданного пункта назначения
std::vector<Aeroflot> listOfFlightsForAGivenDestination(std::vector<Aeroflot> listAeroflot, std::string givenDestination) {
	std::vector<Aeroflot> resList;

	for (int i = 0; i < listAeroflot.size(); i++) {
		if (givenDestination == listAeroflot[i].getDestination()) {
			resList.push_back(listAeroflot[i]);
		}
	}

	return resList;
}

// cписок рейсов для заданного дня недели
std::vector<Aeroflot> listOfFlightsForAGivenDayOfTheWeek(std::vector<Aeroflot> listAeroflot, std::string givenDay) {
	std::vector<Aeroflot> resList;

	for (int i = 0; i < listAeroflot.size(); i++) {
		if (givenDay == listAeroflot[i].getDayOfWeek()) {
			resList.push_back(listAeroflot[i]);
		}
	}

	return resList;
}

// список рейсов для заданного дня недели, время вылета для которых больше заданного.
std::vector<Aeroflot> listOfFlightsForAGivenDayOfTheWeekTheDepartureTimeForWhichIsGreaterThanTheSpecifiedOne(
	std::vector<Aeroflot> listAeroflot, std::string givenDay, Times givenTime) {

	std::vector<Aeroflot> resList;

	for (int i = 0; i < listAeroflot.size(); i++) {
		if (givenDay == listAeroflot[i].getDayOfWeek() && givenTime < listAeroflot[i].getDepartureTime()) {
			resList.push_back(listAeroflot[i]);
		}
	}

	return resList;
}