/*
 * Name        : Assignment 5
 * Author      : Amara Ihekwoeme
 * Description : Tree and Templates
 * Sources     : Luke Sathrum
 */
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
#ifndef BSTNODET_H
#define BSTNODET_H

class BSTNodeT {
 public:
  // Constructors
  template<typename T>
  BSTNodeT();
  template<typename T>
  BSTNodeT(T contents);
  // Destructors
  ~BSTNodeT();
  // Mutators
  template<typename T>
  void SetContents(T contents);
  template<typename T>
  void SetLeft(BSTNodeT* left_child);
  template<typename T>
  void SetRight(BSTNodeT* right_child);
  void IncrementCount();
  void DecrementCount();
  // Accessors
  template<typename T>
  T GetContents() const;
  BSTNodeT* GetLeft();
  BSTNodeT* GetRight();
  unsigned int GetCount();
 private:
  Type contents_;
  unsigned int count_;
  BSTNodeT *left_child_;
  BSTNodeT *right_child_;
};
#endif /* BSTNODET_H */
