#pragma once
#include <iostream>
#include <vector>
#include <string>

class Book {
private:
	std::string author; // �����
	std::string bookTitle; // �������� �����
	std::string publishing; // ������������
	int year; // ��� �������
	int countOfPages; // ���������� �������

public:
	Book(std::string author, std::string bookTitle, std::string publishing, int year, int countOfPages);

	// �������
	std::string getAuthor();
	std::string getBookTitle();
	std::string getPublishing();
	int getYear();
	int getCountOfPages();

	//�������
	void setAuthor(std::string author);
	void setBookTitle(std::string bookTitle);
	void setPublishing(std::string publishing);
	void setYear(int year);
	void setCountOfPages(int countOfPages);

	void show();
};

// ������ ���� ������������� ������
std::vector<Book> getListBookGivenAuthor(std::vector<Book> listBook, std::string author);

// ������ ���� ������������� ������������
std::vector<Book> getListBookGivenPublishing(std::vector<Book> listBook, std::string publishing);

// ������ ���� ���������� ����� ��������� ����
std::vector<Book> getListBookPublishingAfterYear(std::vector<Book> listBook, int year);