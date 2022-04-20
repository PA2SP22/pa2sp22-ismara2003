/*
 * Name        : Lab 18
 * Author      : Amara Ihekwoeme
 * Description : Making class, private data members, public functions
 * Sources     : Luke Sathrum
 */

#include "sl_list.h"
SLList::SLList(head_(NULL), size_(0)) {
}
~SLList::SLList();
void SLList::InsertHead(int head) {
  head_ = head;
}
void SLList::RemoveHead() {
  
}