#include "Node.h"
#include <iostream>
#include <fstream>
class List
{
public:
	Node* head;

	List();
	List(int x);
	~List();
	List(const List& obj);
	List& operator=(const List& other);
	List operator+(const List& other);
	List operator*(const List& other);
	List operator/(const List& other);
	List& operator+=(const List& other);
	List& operator/=(const List& other);
	List& operator*=(const List& other);
	bool operator==(const List& other);
	bool operator!=(const List& other);
	bool operator>(const List& other);
	bool operator<(const List& other);
	bool operator<=(const List& other);
	bool operator>=(const List& other);
	//ostream& operator<<(ostream& os, const List& rational);
    void initList(int x);
	void add(int x);
	bool isEmpty();
	void print();
	void pop();
	void clear();
	
};
