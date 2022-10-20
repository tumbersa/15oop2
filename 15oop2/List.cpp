#include "List.h"
/*Конструкторы*/
List::List()
{
	std::cout << "constructor " << this << std::endl;
	head = new Node();
}

List::List(int x) 
{
	std::cout << "constructor "<<this<<std::endl;
	head = new Node(x);
}
/*Деструктор*/
List::~List() 
{
	std::cout << "destructor " << this << std::endl;
	while (head) {
		pop();
	}
}
/*Конструктор копирования*/


//-------------------------------------------------------
/*Инициализация*/
void List::initList(int x)
{
	head->info = x;
	head->prev = nullptr;
	head->next = nullptr;
}
/*Добавление элемента, как для множества*/
void List::add(int x)
{
	if (head->info > x) {
		Node* q = new Node(x);
		q->next = head;
		head->prev = q;
		head = q;
	}
	if (head->info == x) {
		return;
	}
	else {
		Node* temp = head;
		Node* q = new Node(x);
		while (x > temp->info && temp->next!=nullptr) {
			temp = temp->next;
		}
		if (temp->prev == nullptr) {
			temp->next = q;
			q->prev = temp;
		}
		else
			if (temp->prev->info == x || temp->info == x) {
				return;
			}
		if (x > temp->info) {
			temp->next = q;
			q->prev = temp;
		}
		else {
			temp->prev->next = q;
			q->prev = temp->prev;
			temp->prev = q;
			q->next = temp;
		}
	}
}
//-------------------------------------------------------
/*Проверка на пустой список*/
bool List::isEmpty() {
	if (head == NULL) {
		return 1;
	}
	else {
		return 0;
	}
}
/*Печать*/
void List::print() {
    //std::cout << "\n";
	if (isEmpty()) {
		std::cout << "error";
		return;
	}
	else {
		std::cout << "list: ";
		Node* temp = head;
		while (temp) {
			std::cout << temp->info << " ";
			temp = temp->next;
		}
		std::cout << "\n";
	}
}
//-------------------------------------------------------
/*Удаление текущего элемента (спереди)*/
void List::pop() {
	if (!isEmpty()) {
		Node* temp = head;
		head = head->next;
		temp->prev = nullptr;
		temp->next = nullptr;
		delete temp;
	}
}
/*Чистка элементов списка*/
void List::clear() //&
{
	while (head) {
		pop();
	}
}

