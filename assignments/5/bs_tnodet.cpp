/*
 * Name        : Assignment 5
 * Author      : Amara Ihekwoeme
 * Description : Tree and Templates
 * Sources     : Luke Sathrum
 */
 #include "bs_tnodet.h"
// Constructors
  template<typename T>
  BSTNodeT::BSTNodeT() {
    contents_ = T();
    count_ = 0;
    left_child_ = NULL;
    right_child_ = NULL;
  }
  template<typename T>
  BSTNodeT::BSTNodeT(T contents) {
    contents_ = contents;
    count_ = 0;
    left_child_ = NULL;
    right_child_ = NULL;
  }
  // Destructors
  BSTNodeT::~BSTNodeT() {
    left_child_ = NULL;
    right_child_ = NULL;
  }
  // Mutators
  template<typename T>
  void BSTNodeT::SetContents(T contents) {
    contents_ = contents;
  }
  template<typename T>
  void BSTNodeT::SetLeft(BSTNodeT* left_child) {
    left_child_ = left_child;
  }
  template<typename T>
  void BSTNodeT::SetRight(BSTNodeT* right_child) {
    right_child_ = right_child;
  }
  void BSTNodeT::IncrementCount() {
    count_++;
  }
  void BSTNodeT::DecrementCount() {
    count_--;
  }
  // Accessors
  template<typename T>
  T BSTNodeT::GetContents() const {
    return contents_;
  }
  BSTNodeT* BSTNodeT::GetLeft() {
    return left_child_;
  }
  BSTNodeT* BSTNodeT::GetRight() {
    return right_child_;
  }
  unsigned int BSTNodeT::GetCount() {
    return count_;
  }