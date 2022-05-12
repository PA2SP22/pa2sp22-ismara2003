/*
 * Name        : Lab 19
 * Author      : Amara Ihekwoeme
 * Description : Making class, private data members, public functions
 * Sources     : Luke Sathrum
 */

#include "sl_list.h"
SLList::SLList() {
  head_ = NULL;
  tail_ =  NULL;
  size_ = 0;
}
SLList::~SLList() {
  Clear();
}
void SLList::InsertHead(int head_value) {
  // Create a new node set to the head_value
  SLNode *new_node = new SLNode(head_value);
  size_++;
   // Point the new node to where head is pointing to
  new_node->set_next_node(head_);
  // Head needs to point to the new node
  head_ = new_node;
}
void SLList::InsertTail(int tail_value) {

}
void SLList::RemoveHead() {
  if (head_ == NULL) {
    return;
  }
  // Hints: Needs Delete and Uses Iterator
  // Step 1: create a temporary pointer to where head is pointing to
  SLNode *temp;
  temp = head_;
  // Step 2: Point the head to the next node in the list
  // a) might need to point to null if only node in list
  head_ = head_->next_node();
  // Step 3: Remove the node temp is pointing to
  delete temp;
  size_--;
}
void SLList::RemoveTail() {
  // Condition for an empty list
  // Don't do anything
  if (head_ == NULL && tail_ == NULL) {
    return;
  // If one in list, we delete that one
  // then make them both equal null
  } else if (head_ == tail_) {
    RemoveHead();
  } else {
    // Objective: tansverse to second to last node
    // need iterator
    // point it to what head is pointing to
  }
}
int SLList::GetHead() const {
  return head_->contents();
}
int SLList::GetTail() const {
  return tail_->contents();
}
void SLList::Clear() {
  // if list is empty, do not remove
  if (head_ == NULL && tail_ == NULL)
    return;
  // Create iterator pointer
  SLNode *iterator;
  // Point to where head is pointing to
  iterator = head_;
  if (iterator != NULL) {
  // head points to next node
  head_ = head_->next_node();
  // Delete what the iterator poinying to
  delete iterator;
  size_--;
  // iterator points to next node 
  // aka what head is pointing to
  iterator = head_;
  }
}
unsigned int SLList::size() const {
  return size_;
}
string SLList::ToString() const {
  return "";
}
