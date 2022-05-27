/*
 * Name        : Lab 26
 * Author      : Amara Ihekwoeme
 * Description : Inheritance
 * Sources     : Luke Sathrum
 */
#include "item.h"

Item::Item(string name, unsigned int value)
    : name_(name), value_(value) {
  }
  // Destructor
  Item::~Item() {
    name_ = "item";
    value_ = 0;
  }
  // Accessor
  string Item::name() {
    return name_;
  }
  int Item::value() {
    return value_;
  }
  // Functions
  string Item::ToString() {
    ostringstream ss;
    ss << name_ << ", $" << value_;
    return ss.str();
  }