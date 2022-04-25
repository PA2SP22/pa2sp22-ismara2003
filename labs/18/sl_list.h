/*
 * Name        : Lab 18
 * Author      : Amara Ihekwoeme
 * Description : Making class, private data members, public functions
 * Sources     : Luke Sathrum
 */

#ifndef lab_18_
#define lab_18_
#include "sl_node.cpp"
#include <iostream>
#include <string>
#include <cstddef>
// using std::cout;
// using std::cin;
// using std::endl;
using std::string;
class SLList {
 public: 
  // Constructor
  SLList();
  // Destructor
  ~SLList();
  // Mutator
  void InsertHead(int head);
  void RemoveHead();
  void Clear();
  // Accessor
  unsigned int size() const
  string ToString();
 private: 
  SLNode  *head_;
  unsigned int size_;
}
#endif /*lab_18_*/