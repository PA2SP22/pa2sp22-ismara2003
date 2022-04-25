/*
 * Name        : Lab 18
 * Author      : Amara Ihekwoeme
 * Description : Making class, private data members, public functions
 * Sources     : Luke Sathrum
 */

#include "sl_list.h"
SLList::SLList() {
  head_ = NULL;
  size_ = 0;
}
SLList::~SLList() {
  // Calls the Clear Function
}
void SLList::InsertHead(int head_value) {
  // Create a new node set to the head_value
  SLNode *new_node = new SLNode(head_value);
    
  // Point the new node to where head is pointing to
  new_node
  // Point head to the new node
}
void SLList::RemoveHead() {
  
}