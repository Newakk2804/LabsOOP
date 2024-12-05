#include "LinkedList.h"

// конструктор
LinkedList::LinkedList() : head(nullptr) {}

// деструктор для освобождения памяти
LinkedList::~LinkedList() {
	Node* current = head;
	while (current) {
		Node* next = current->next;
		delete current;
		current = next;
	}
}

// метод добавления элементов в список в порядке неубывания
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

// метод перевора списка
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

// метод вывода списка
void LinkedList::print() const {
	Node* current = head;
	while (current) {
		std::cout << current->data << " ";
		current = current->next;
	}
	std::cout << std::endl;
}