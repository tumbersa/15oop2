#pragma once
class dlist
{
	double info;
	dlist* next;
	dlist* prev;
public:
	/*������ �����������*/
	dlist();
	dlist(double,dlist&,dlist&);//
	~dlist();
	dlist(dlist&);//����������� �����������
	void setInfo(double);
	void setNext(dlist&);
	void setPrev(dlist&);
	double getInfo();
	dlist* 

};

