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
  list = new TodoList*[25];
  for (unsigned int i = 0; i < GetCapacity(); i++) {
    list[i] = NULL;
  }
}
// Destructor 
~TodoList::TodoList() {
  for (unsigned int i = 0; i < GetSize(); i++) {
    delete list[i];
  }
  delete[] list;
}
// Friend Function
/* ostream& operator <<(ostream &out, TodoList &list) {
  for (unsigned int i = 0; i < GetSize(); i++) {
// loop involving i and j
  }
} */
// TodoItem* item is private... is that y i can use it in parameter
void TodoList::AddItem(TodoItem* item) {
  if (GetSize() < GetCapacity()) {
    list[GetSize()] = item;
    size++;
  } else if (GetSize() == GetCapacity()) {
    // increase_cap is also private... how can i use it
    increase_cap();
  }
}
void TodoList::DeleteItem(unsigned int delete_location) {
  if (delete_location >= GetSize()) {
    // problem
  } else if (delete_location <= GetSize()) {
    delete list[delete_location];
    for (unsigned int i = delete_location; i < GetSize(), i++) { 
      list[i] = list[i+1];
      if (i == GetSize()) {
        list[i] = NULL;
      }
    }
  }
}
