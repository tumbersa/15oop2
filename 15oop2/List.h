#include "Node.h"
#include <iostream>

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
	friend std::ostream& operator<<(std::ostream& out, List& obj);
	friend std::istream& operator>>(std::istream& in, List& obj);
    void initList(int x);
	void add(int x);
	bool isEmpty();
	void print();
	void pop();
	void clear();
	
};
