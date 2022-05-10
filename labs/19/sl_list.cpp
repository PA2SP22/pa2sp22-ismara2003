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
SLList()::~SLList() {
  Clear();
}
void SLList::InsertHead()(int head_value) {
  // Create a new node set to the head_value
  SLNode *new_node = new SLNode(head_value);
  size_++;
   // Point the new node to where head is pointing to
  new_node->set_next_node(head_);
  // Head needs to point to the new node
  head_ = new_node;
}
