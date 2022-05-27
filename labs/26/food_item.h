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
#ifndef FOOD_ITEM_H
#define FOOD_ITEM_H
class FoodItem : public Item {
 public:
  // Constructor
  FoodItem(string name, int value, unsigned int calories, string unit_of_measure, double units);
  // Destructor
  ~FoodItem();
  // Accessors
  int calories();
  string unit_of_measure();
  double units();
  // Mutators
  void set_calories(unsigned int calories);
  void set_unit_of_measure(string unit_of_measure);
  void set_units(double units);
  /* Functions */
  string ToString();
 private:
  unsigned int calories_;
  string unit_of_measure_;
  double units_;
}
#endif /*FOOD_ITEM_H*/