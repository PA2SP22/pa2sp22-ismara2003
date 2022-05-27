/*
 * Name        : Lab 26
 * Author      : Amara Ihekwoeme
 * Description : Inheritance
 * Sources     : Luke Sathrum
 */
#include <iostream>
#include <string>
#include <sstream>
using std::ostringstream;
using std::string;
using std::ostream;
// using std::cout;
// using std::cin;
// using std::endl;
// using std::stringstream;
#ifndef ITEM_H
#define ITEM_H

class Item {
 public:
  Item(string name = "item", unsigned int value = 0);
  // Destructor
  ~Item();
  // Accessor
  string name();
  int value();
  // Functions
  string ToString();
 private:
  string name_;
  unsigned int value_;
};

#endif /* ITEM_H */
