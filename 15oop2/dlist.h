#pragma once
class dlist
{
	double info;
	dlist* next;
	dlist* prev;
public:
	/*пустой конструктор*/
	dlist();
	dlist(double,dlist&,dlist&);//
	~dlist();
	dlist(dlist&);//конструктор копирования
	void setInfo(double);
	void setNext(dlist&);
	void setPrev(dlist&);
	double getInfo();
	dlist* 

};

