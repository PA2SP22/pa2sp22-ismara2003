/*
 * Name        : Assignment 3c .h
 * Author      : Amara Ihekwoeme
 * Description : Using Pointers
                 Manage memory
                 Work with arrays
 * Sources     : Luke Sathrum
 */
#include <iostream>
#include <string>
#include <sstream>
#include "CinReader.h"
// using std::cout;
// using std::cin;
// using std::endl;
// using std::string;
// using std::stringstream;

class Item {
 public:
Items(string name = "item", unsigned int value = 0)
    : name_(name), value_(value) {
}
 private:
string name_;
unsigned int value_;
}