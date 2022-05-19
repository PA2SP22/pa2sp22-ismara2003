/*
 * Name        : Assignment 3c .cpp
 * Author      : Amara Ihekwoeme
 * Description : Using Pointers
                 Manage memory
                 Work with arrays
 * Sources     : Luke Sathrum
 */
#include "todo_ui.h"
// Constructor
TodoUI::TodoUI() {
  list_ = new TodoList;
}
// Destructor
TodoUI::~TodoUI() {
  delete list_;
}
// Member Functiom
void TodoUI::Menu() {
  cout << "Hello, you have reached your list" << endl;
  cout << "What would you like to do?" << endl;
  cout << "Press 1 if you would like to add an item" << endl;
  cout << "Press 2 if you would like to edit an item" << endl;
  cout << "Press 3 if you would like to view all items" << endl;
  cout << "Press 4 if you would like to view a specific item" << endl;
  cout << "Press 5 if you would like to delete all items on a list" << endl;
  cout << "Press 6 if you would like to end the call" << endl;
int value;  
CinReader reader;
  value = reader.readInt();
  /* Choices */
  // Create New Item
  if (value == 1) {
    cout << "You have chosen to add an item" << endl;
    cout << "What is the decription of the item you would like to add" 
         << endl;
    string description = reader.readString();
    //
    cout << "What do you rate the priority from 1 - 5" << endl;
    int priority = reader.readInt(1, 5);
    //
    cout << "Is this item completed?" << endl;
    bool completed = reader.readBool();
    // Call AddItem
    list_->AddItem(new TodoItem(description, priority, completed));
  }
  // Edit an Item
  if (value == 2) {
    cout << "You have chosen to edit an item" << endl;
    // which item to edit?
    // Call Mutator
  }
  // View All Items
  if (value == 3) {
    cout << "You have chosen to view all your items" << endl;
    // Call ToFile
  }
  // View Specific Item
  if (value == 4) {
    cout << "You have chosen to view a specific item" << endl;
    // ???
  }
  // Delete All Items
  if (value == 5) {
    cout << "You have chosen to delete an item" << endl;
    // Call Delete
  }  
  // Quit Program
  if (value == 6) {
    cout << "Thank you for calling" << endl;
    return;
  }
}