#pragma once
#include <iostream>
#include <fstream>
#include "Node.h"

class LinkedList {
private:
	Node* head;

public:
	// �����������
	LinkedList();

	// ���������� ��� ������������ ������
	~LinkedList();

	// ����� ���������� ��������� � ������ � ������� ����������
	void add(double value);

	// ����� �������� ������
	void reverse();

	// ����� ������ ������
	void print() const;
};