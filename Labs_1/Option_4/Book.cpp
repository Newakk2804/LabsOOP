#include "Book.h"

Book::Book(std::string author, std::string bookTitle, std::string publishing, int year, int countOfPages) {
	this->author = author;
	this->bookTitle = bookTitle;
	this->publishing = publishing;
	this->year = year;
	this->countOfPages = countOfPages;
}

// геттеры
std::string Book::getAuthor() {
	return this->author;
}

std::string Book::getBookTitle() {
	return this->bookTitle;
}

std::string Book::getPublishing() {
	return this->publishing;
}

int Book::getYear() {
	return this->year;
}

int Book::getCountOfPages() {
	return this->countOfPages;
}

// сеттеры
void Book::setAuthor(std::string author) {
	this->author = author;
}

void Book::setBookTitle(std::string bookTitle) {
	this->bookTitle = bookTitle;
}

void Book::setPublishing(std::string publishing) {
	this->publishing = publishing;
}

void Book::setYear(int year) {
	this->year = year;
}

void Book::setCountOfPages(int countOfPages) {
	this->countOfPages = countOfPages;
}

void Book::show() {
	std::cout << "Author: " << this->author << std::endl;
	std::cout << "Book title: " << this->bookTitle << std::endl;
	std::cout << "Publishing: " << this->publishing << std::endl;
	std::cout << "year: " << this->year << std::endl;
	std::cout << "Count of pages: " << this->countOfPages << std::endl;
}

// список книг определенного автора
std::vector<Book> getListBookGivenAuthor(std::vector<Book> listBook, std::string author) {
	std::vector<Book> resList;

	for (int i = 0; i < listBook.size(); i++) {
		if (listBook[i].getAuthor() == author) {
			resList.push_back(listBook[i]);
		}
	}
	
	return resList;
}

// список книг определенного издательства
std::vector<Book> getListBookGivenPublishing(std::vector<Book> listBook, std::string publishing) {
	std::vector<Book> resList;

	for (int i = 0; i < listBook.size(); i++) {
		if (listBook[i].getPublishing() == publishing) {
			resList.push_back(listBook[i]);
		}
	}

	return resList;
}

// список книг выпущенных после заданного года
std::vector<Book> getListBookPublishingAfterYear(std::vector<Book> listBook, int year) {
	std::vector<Book> resList;

	for (int i = 0; i < listBook.size(); i++) {
		if (listBook[i].getYear() > year) {
			resList.push_back(listBook[i]);
		}
	}

	return resList;
}