#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char *name, const char *addr) {
  this->name = new char[strlen(name) + 1];
  strcpy(this->name, name);
  this->addr = new char[strlen(addr) + 1];
  strcpy(this->addr, addr);
  cout << "constructor called" << endl;
}

Person::~Person() {
  cout << "destructor called" << endl;
  delete[] name;
  delete[] addr;
}

void Person::print() const
{
  cout << "name : " << name << endl;
  cout << "address : " << addr << endl;
}

void Person::changeAddr(const char *addr) {
  delete[] this->addr;
  this->addr = new char[strlen(addr) + 1];
  strcpy(this->addr, addr);
}