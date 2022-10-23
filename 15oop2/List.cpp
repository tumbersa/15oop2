#include "List.h"
#include <fstream>
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
	clear();
}
/*Конструктор копирования*/
List::List(const List& obj) {
	head = new Node(obj.head->info);
	Node* temp = obj.head;
	while (temp->next != nullptr) {
		temp = temp->next;
		add(temp->info);
	}
}
/*оператор присваивания*/
List& List::operator=(const List& other) {
	if (&other != this) {
		clear();
		head = new Node(other.head->info);
		Node* temp = other.head;
		while (temp->next != nullptr) {
			temp = temp->next;
			add(temp->info);
		}
	}

	return *this;
}
/*оператор объединения*/
List List::operator+(const List& other) {
	List tm;
	tm.head = new Node(head->info);
	Node* temp = head;
	while (temp) {
		tm.add(temp->info);
		temp = temp->next;
	}
	temp = other.head;
	while (temp) {
		tm.add(temp->info);
		temp = temp->next;
	}
	return tm;
}
/*оператор пересечения*/
List List::operator*(const List& other) {
	List tm;
	bool f = 1;
	Node* temp1 = head;
	Node* temp2 = other.head;
	while (temp1) {
		temp2 = other.head;
		while (temp2) {
			if (temp2->info == temp1->info)
			{
				if (f) {
					tm.head = new Node(temp1->info); 
					f = 0;
				}
				else {
					tm.add(temp1->info);
				}
			}
			temp2 = temp2->next;
	}
		temp1 = temp1->next;
	}

	return tm;
}
/*оператор разности*/
List List::operator/(const List& other) {
	List tm;
	bool f1 = 1,f2;
	Node* temp1 = head;
	Node* temp2 = other.head;
	while (temp1) {
		f2 = 1;
		temp2 = other.head;
		while (temp2 && f2) {
			if (temp2->info == temp1->info) f2 = 0;
			temp2 = temp2->next;
		}
		if (f2) {
			if (f1) {
				tm.head = new Node(temp1->info);
				f1 = 0;
			}
			else {
				tm.add(temp1->info);
			}
		}
		temp1 = temp1->next;
	}
	return tm;
}
List& List::operator+=(const List& other) {
	*this = *this + other;
	return *this;
}
List& List::operator/=(const List& other) {
	*this = *this / other;
	return *this;
}
List& List::operator*=(const List& other) {
	*this = *this * other;
	return *this;
}
/*операции сравнения*/
bool List::operator==(const List& other) {
	bool f = 0,f2=1; int i1 = 0, i2 = 0, j = 0;
	Node* temp1 = head;
	Node* temp2 = other.head;
	while (temp1) {
		temp2 = other.head;
		while (temp2) {
			if (temp2->info == temp1->info) j++;
			if (f2) i2++;
			temp2 = temp2->next;
		}
		f2 = 0;
		i1++;
		temp1 = temp1->next;
	}
	if (j == i1 || j == i2 && i1==i2) f = 1;
	return f;
}
bool List::operator!=(const List& other) {
	bool f = 0, f2 = 1; int i1 = 0, i2 = 0, j = 0;
	Node* temp1 = head;
	Node* temp2 = other.head;
	while (temp1) {
		temp2 = other.head;
		while (temp2) {
			if (temp2->info == temp1->info) j++;
			if (f2) i2++;
			temp2 = temp2->next;
		}
		f2 = 0;
		i1++;
		temp1 = temp1->next;
	}
	if (j != i1 && j != i2 || i1 != i2) f = 1;
	return f;
}
bool List::operator>(const List& other) {
	bool f = 0, f2 = 1; int i1 = 0, i2 = 0, j = 0;
	Node* temp1 = head;
	Node* temp2 = other.head;
	while (temp1) {
		temp2 = other.head;
		while (temp2) {
			if (temp2->info == temp1->info) j++;
			if (f2) i2++;
			temp2 = temp2->next;
		}
		f2 = 0;
		i1++;
		temp1 = temp1->next;
	}
	if (i2==j && i1>i2) f = 1;
	return f;
}
bool List::operator<(const List& other) {
	bool f = 0, f2 = 1; int i1 = 0, i2 = 0, j = 0;
	Node* temp1 = head;
	Node* temp2 = other.head;
	while (temp1) {
		temp2 = other.head;
		while (temp2) {
			if (temp2->info == temp1->info) j++;
			if (f2) i2++;
			temp2 = temp2->next;
		}
		f2 = 0;
		i1++;
		temp1 = temp1->next;
	}
	if (i1 == j && i1 < i2) f = 1;
	return f;
}
bool List::operator<=(const List& other) {
	bool f = 0, f2 = 1; int i1 = 0, i2 = 0, j = 0;
	Node* temp1 = head;
	Node* temp2 = other.head;
	while (temp1) {
		temp2 = other.head;
		while (temp2) {
			if (temp2->info == temp1->info) j++;
			if (f2) i2++;
			temp2 = temp2->next;
		}
		f2 = 0;
		i1++;
		temp1 = temp1->next;
	}
	if (i1 == j && i1 < i2|| i1==i2 && j==i1) f = 1;
	return f;
}
bool List::operator>=(const List& other) {
	bool f = 0, f2 = 1; int i1 = 0, i2 = 0, j = 0;
	Node* temp1 = head;
	Node* temp2 = other.head;
	while (temp1) {
		temp2 = other.head;
		while (temp2) {
			if (temp2->info == temp1->info) j++;
			if (f2) i2++;
			temp2 = temp2->next;
		}
		f2 = 0;
		i1++;
		temp1 = temp1->next;
	}
	if (i2 == j && i1 > i2 || i1 == i2 && j == i1) f = 1;
	return f;
}
//побитовый сдвиг, ввод и вывод
//ostream& operator<<(ostream& os, const List& obj) {
//	os << obj.print();
//
//	return os;
//}
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

