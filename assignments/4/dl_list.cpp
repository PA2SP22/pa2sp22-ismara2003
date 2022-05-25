/*
 * Name        : Assignment 4
 * Author      : Amara Ihekwoeme
 * Description : Doubly Linked List
 * Sources     : Luke Sathrum
 */

#include "dl_list.h"
// Constructor
DLList::DLList() {
  size_ = 0;
  head_ = NULL;
  tail_ = NULL;
}
// Destructor
// - Calls Clear
DLList::~DLList() {
  Clear();
}
// Accessor
unsigned int DLList::GetSize() const {
  return size_;
}
/* Public Functions*/
// Creates DLNode with contents of parameter
// and adds to the front of list
void DLList::PushFront(int contents) {
  DLNode *new_node = new DLNode();
  size_++;
  new_node->SetContents(contents);
  new_node->SetNext(head_);
  
}
// Creates DLNode with contents of parameter
// and adds to the end of list
void DLList::PushBack(int contents) {
  DLNode *new_node = new DLNode();
  size_++;
  new_node->SetContents(contents);
  new_node->SetPrevious(tail_);
}
// Outputs value at beginning of list
// Output "List Empty" to standard error
// if list is empty and return 0
int DLList::GetFront() const {
  DLNode* first;
  if (size_ == 0) {
    std::cerr << "List Empty";
    return 0;
  } else {
    first = head_->GetNext();
  }
  return first->GetContents();
}
// Outputs value at end of list
// Output "List Empty" to standard error
// if list is empty and return 0
int DLList::GetBack() const {
  DLNode* last;
  if (size_ == 0) {
    std::cerr << "List Empty";
    return 0;
  } else {
    last = tail_->GetPrevious();
  }
  return last->GetContents();
}
// Removes first node
// Outputs "List Empty" to standard error output 
// if empty
void DLList::PopFront() {
  if (size_ == 0) {
    std::cerr << "List Empty";
  } else {
    DLNode *temp = head_;
    head_ = head_->GetNext();
    delete temp;
    size_--;
  }
}
// Removes last node
// Outputs "List Empty" to standard error output 
// if empty
void DLList::PopBack() {
  if (size_ == 0) {
    std::cerr << "List Empty";
  } else {
    DLNode *temp = tail_;
    tail_ = tail_->GetPrevious();
    delete temp;
    size_--;
  }
}
// Find "first" value to match, if found remove node
// If not found, 
// output "Not Found" to standard error output
void DLList::RemoveFirst(int number) {
  DLNode *iterator = head_;
  while (iterator != NULL)
    iterator = iterator->GetNext();
    if (iterator->GetContents() == number) {
      // delete it but then loose memory
    }
}
// Find all values to match, if found remove node
// If not found,
// output "Not Found" to standard error output
void DLList::RemoveAll(int number) {
}
// Find integer
// If found return true, else return false
bool DLList::Exists(int number) {
  return true;
}
// Clears all nodes in list
// Resets size to 0
// head_ and tail_ to NULL
void DLList::Clear() {
  
}
// Output contents comma seperated
// from first node to last node
// If empty, return empty string
// and output "List Empty" to standard error output
string DLList::ToStringForwards() {
  return "";
}
string DLList::ToStringBackwards() {
  return "";
}