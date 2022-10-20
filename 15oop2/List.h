#include "Node.h"
#include <iostream>

class List
{
public:
	Node* head;

	List();
	List(int x);
	~List();

    void initList(int x);
	void add(int x);
	bool isEmpty();
	void print();
	void pop();
	void clear();
	
};
