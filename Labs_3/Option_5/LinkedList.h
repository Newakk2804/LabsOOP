#pragma once
#include <iostream>
#include <fstream>
#include "Node.h"

class LinkedList {
private:
	Node* head;

public:
	// конструктор
	LinkedList();

	// деструктор для освобождения памяти
	~LinkedList();

	// метод добавления элементов в список в порядке неубывания
	void add(double value);

	// метод перевора списка
	void reverse();

	// метод вывода списка
	void print() const;
};