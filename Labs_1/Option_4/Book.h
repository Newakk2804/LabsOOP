#pragma once
#include <iostream>
#include <vector>
#include <string>

class Book {
private:
	std::string author; // автор
	std::string bookTitle; // название книги
	std::string publishing; // издательство
	int year; // год выпуска
	int countOfPages; // количество страниц

public:
	Book(std::string author, std::string bookTitle, std::string publishing, int year, int countOfPages);

	// геттеры
	std::string getAuthor();
	std::string getBookTitle();
	std::string getPublishing();
	int getYear();
	int getCountOfPages();

	//сеттеры
	void setAuthor(std::string author);
	void setBookTitle(std::string bookTitle);
	void setPublishing(std::string publishing);
	void setYear(int year);
	void setCountOfPages(int countOfPages);

	void show();
};

// список книг определенного автора
std::vector<Book> getListBookGivenAuthor(std::vector<Book> listBook, std::string author);

// список книг определенного издательства
std::vector<Book> getListBookGivenPublishing(std::vector<Book> listBook, std::string publishing);

// список книг выпущенных после заданного года
std::vector<Book> getListBookPublishingAfterYear(std::vector<Book> listBook, int year);