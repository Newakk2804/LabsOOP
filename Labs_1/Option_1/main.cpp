#include <iostream>
#include <string>
#include <vector>
#include <set>


struct DateOfBirth {
	int days;
	int mounths;
	int years;

	std::string showDate() {
		return std::to_string(days) + '.' + std::to_string(mounths) + '.' + std::to_string(years);
	}
};

class Student {
private:
	std::string firstName; // фамилия
	std::string name; // имя
	std::string lastName; // отчество
	DateOfBirth yearOfBirth; // год рождения
	std::string addres; // адрес
	std::string numberOfPhone; // номер телефона
	std::string faculty; // факультет
	int course; // курс

public:

	Student() {
		this->firstName = "";
		this->name = "";
		this->lastName = "";
		this->yearOfBirth = { 0,0,0 };
		this->addres = "";
		this->numberOfPhone = "";
		this->faculty = "";
		this->course = 0;
	}

	Student(std::string firstName, std::string name, std::string lastName, DateOfBirth yearOfBirth, std::string addres,
		std::string numberOfPhone, std::string faculty, int course) {
		this->firstName = firstName;
		this->name = name;
		this->lastName = lastName;
		this->yearOfBirth = yearOfBirth;
		this->addres = addres;
		this->numberOfPhone = numberOfPhone;
		this->faculty = faculty;
		this->course = course;
	}


	// геттеры
	//---------------------------------------------------------------------
	std::string getFirstName() {
		return this->firstName;
	}

	std::string getName() {
		return this->name;
	}

	std::string getLastName() {
		return this->lastName;
	}

	DateOfBirth getYearOfBirth() {
		return this->yearOfBirth;
	}

	std::string getAddres() {
		return this->addres;
	}

	std::string getNumberOfPhone() {
		return this->numberOfPhone;
	}

	std::string getFaculty() {
		return this->faculty;
	}

	int getCourse() {
		return this->course;
	}
	//---------------------------------------------------------------------


	// сеттеры
	//---------------------------------------------------------------------
	void setFirstName(std::string firstName) {
		this->firstName = firstName;
	}

	void setName(std::string name) {
		this->name = name;
	}

	void setLastName(std::string lastName) {
		this->lastName = lastName;
	}

	void setYearOfBirth(DateOfBirth date) {
		this->yearOfBirth = date;
	}

	void setAddres(std::string addres) {
		this->addres = addres;
	}

	void setNumberOfPhone(std::string numberOfPhone) {
		this->numberOfPhone = numberOfPhone;
	}

	void setFaculty(std::string faculty) {
		this->faculty = faculty;
	}

	void setCourse(int course) {
		this->course = course;
	}
	//---------------------------------------------------------------------

	std::string ShowStudent() {
		return this->firstName + ' ' + this->name + ' ' + this->lastName + ' ' + yearOfBirth.showDate() + ' ' +
			this->addres + ' ' + this->numberOfPhone + ' ' + this->faculty + ' ' + std::to_string(this->course);
	}
};

// список студентов заданного факультета
std::vector<Student> listStudentOfFaculty(std::vector<Student> listSt, std::string searchFaculty) {
	std::vector<Student> newListSt;

	for (int i = 0; i < listSt.size(); i++) {
		if (listSt[i].getFaculty() == searchFaculty) {
			newListSt.push_back(listSt[i]);
		}
	}

	return newListSt;
}

// список студентов для каждого факультета
std::vector<std::vector<Student>> listStudentForEachFaculty(std::vector<Student> listSt) {
	std::set<std::string> tempList;
	std::vector<Student> listStFaculty;
	std::vector<std::vector<Student>> listStAllFaculty;

	for (int i = 0; i < listSt.size(); i++) {
		tempList.insert(listSt[i].getFaculty());
	}

	for (auto i : tempList) {
		for (int j = 0; j < listSt.size(); j++) {
			if (i == listSt[j].getFaculty()) {
				listStFaculty.push_back(listSt[j]);
			}
		}
		listStAllFaculty.push_back(listStFaculty);
		listStFaculty.clear();
	}

	return listStAllFaculty;
}

// список студентов для каждого курса
std::vector<std::vector<Student>> listStudentForEachCourse(std::vector<Student> listSt) {
	std::set<int> tempList;
	std::vector<Student> listStCourse;
	std::vector<std::vector<Student>> listStAllCourse;

	for (int i = 0; i < listSt.size(); i++) {
		tempList.insert(listSt[i].getCourse());
	}

	for (auto i : tempList) {
		for (int j = 0; j < listSt.size(); j++) {
			if (i == listSt[j].getCourse()) {
				listStCourse.push_back(listSt[j]);
			}
		}
		listStAllCourse.push_back(listStCourse);
	}

	return listStAllCourse;
}

// список студентов, родившихся после заданного года
std::vector<Student> listStudentBornAfterAGivenYear(std::vector<Student> listSt, int year) {
	std::vector<Student> newListSt;

	for (int i = 0; i < listSt.size(); i++) {
		if (listSt[i].getYearOfBirth().years > year) {
			newListSt.push_back(listSt[i]);
		}
	}

	return newListSt;
}

int main() {
	Student st1{};
	Student st2{};
	Student st3{};
	Student st4{};
	std::vector<Student> listStud{ st1, st2, st3, st4 };

	auto listRes = listStudentForEachFaculty(listStud);

	for (int i = 0; i < listRes.size(); i++) {
		for (int j = 0; j < listRes[i].size(); j++) {
			std::cout << listRes[i][j].ShowStudent() << std::endl;
		}
	}

	return 0;
}