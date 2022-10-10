#include "dlist.h"

dlist::dlist() {}
dlist::dlist(double info, dlist& next, dlist& prev) {}
dlist::~dlist() {}
dlist::dlist(dlist&) {}
void dlist::setInfo(double info) {}
void dlist::setNext(dlist& next) {}
void dlist::setPrev(dlist& prev) {}
double dlist::getInfo() {}
dlist* dlist::getNext() {}
dlist* dlist::getPrev() {}
dlist& dlist::operator=(dlist&) {}
dlist dlist::operator+(dlist&) {}
dlist dlist::operator-(dlist&) {}
dlist dlist::operator*(dlist&) {}
dlist dlist::operator/(dlist&) {}
bool dlist::operator==(dlist&) {}
bool dlist::operator!=(dlist&) {}
bool dlist::operator>(dlist&) {}
bool dlist::operator<(dlist&) {}
bool dlist::operator>=(dlist&) {}
bool dlist::operator<=(dlist&) {}
dlist& dlist::operator+=(dlist&) {}
dlist& dlist::operator-=(dlist&) {}
dlist& dlist::operator*=(dlist&) {}
dlist& dlist::operator/=(dlist&) {}
