#include "LinkedList.h"

// �����������
LinkedList::LinkedList() : head(nullptr) {}

// ���������� ��� ������������ ������
LinkedList::~LinkedList() {
	Node* current = head;
	while (current) {
		Node* next = current->next;
		delete current;
		current = next;
	}
}

// ����� ���������� ��������� � ������ � ������� ����������
void LinkedList::add(double value) {
	Node* newNode = new Node(value);
	if (!head || head->data > value) {
		newNode->next = head;
		head = newNode;
	}
	else {
		Node* current = head;
		while (current->next && current->next->data <= value) {
			current = current->next;
		}
		newNode->next = current->next;
		current->next = newNode;
	}
}

// ����� �������� ������
void LinkedList::reverse() {
	Node* prev = nullptr;
	Node* current = head;
	Node* next = nullptr;

	while (current) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

// ����� ������ ������
void LinkedList::print() const {
	Node* current = head;
	while (current) {
		std::cout << current->data << " ";
		current = current->next;
	}
	std::cout << std::endl;
}