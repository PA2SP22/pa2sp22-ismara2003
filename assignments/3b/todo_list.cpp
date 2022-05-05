/*
 * Name        : Assignment 3a
 * Author      : Amara Ihekwoeme
 * Description : To do List part 2
                 Class
 * Sources     : Luke Sathrum
 */

#include "todo_list.h"

// Constructor 
TodoList::TodoList() {
  // Create an array of 25 pointers to TodoItems
  list = new TodoItem*[25];
  // Sets capacity to 25
  capacity_ = 25;
  // Sets size to 0
  size_ = 0;
  // Set all of the pointers in the Array to NULL
  for (unsigned int i = 0; i < GetCapacity(); i++) {
    list[i] = NULL;
  }
}
// Destructor 
TodoList::~TodoList() {
  for (unsigned int i = 0; i < GetSize(); i++) {
    delete list[i];
  }
  delete[] list;
}
// Friend Function
 ostream& operator <<(ostream &out, TodoList &list) {
  for (unsigned int i = 0; i < list.GetSize(); i++) {
    out << list.list[i]->description << ' ' 
        << list.list[i]->priority() << ' '
        << list.list[i]->completed();
  }
} 

void TodoList::AddItem(TodoItem* item) {
  if (GetSize() < GetCapacity()) {
    list[GetSize()] = item;
    size_++;
  } else if (GetSize() == GetCapacity()) {
    increase_cap();
  }
}
void TodoList::DeleteItem(unsigned int delete_location) {
  if (delete_location >= GetSize()) {
    // problem... do i return?
  } else if (delete_location <= GetSize()) {
    delete list[delete_location];
    // compacting array
    for (unsigned int i = delete_location; i < GetSize(); i++) { 
      list[i] = list[i+1];
      if (i == GetSize()) {
        list[i] = NULL;
      }
    }
  }
}
TodoItem* TodoList::GetItem(int retrieve_location) {
  if (list[retrieve_location - 1] == NULL) {
    return NULL;
  } else if (retrieve_location > 0 && retrieve_location <= GetSize()) {
    return list[retrieve_location - 1];
  }
}
unsigned int TodoList::GetSize() {
  return size_;
}
unsigned int TodoList::GetCapacity() {
  return capacity_;
}
void TodoList::Sort() {
  bool swapped;
  for (unsigned int i = size_- 1; i >= 1; i--) {
    swapped = false;
  for (unsigned int j = 0; j <= i -1; j++) {
    if (list[j] > list[j+1]) {
      SwapValues(list[j], list[j + 1]);
      swapped = true;
    }
  }
  if (swapped == false) {
    break;
  }
}
  string TodoList::ToFile() {
    for (unsigned int i = 0; i < size_; i++) {
       ToFile().list[i];
    }
  }
void TodoList::increase_cap() {
  TodoList** new_array = new TodoList*[capacity_ + 10];
  for (unsigned int i = 0; i < size_; i++) {
    new_array[i] = list[i];
  }
}
void TodoList::SwapValues(TodoList* &value_1, TodoList* &value_2) {
  TodoItem* value_3;
  value_3 = value_1;
  value_1 = value_2;
  value_2 = value_3;
}
  
