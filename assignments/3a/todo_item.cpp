/*
 * Name        : Assignment 3a
 * Author      : Amara Ihekwoeme
 * Description : To do List part 1
 * Sources     : Luke Sathrum
 */

#include <iostream>
#include <string>
//using std::cout;
//using std::cin;
//using std::endl;
using std::string;

class TodoItem {
public:
// Member Function
string ToFile();
//Constructor 
TodoItem(string description = "", int priority = 1, bool completed = false);
// Accessors
string description(); 
int priority();
bool completed();
// Mutators
void set_description(string description);
void set_priority(int priority);
void set_completed(bool completed);
private:
string description_;
int priority_;
bool completed_;
string Scrub(string description);
};

int main() {
  // Print a welcome message to the screen
  cout << "Welcome to the program!\n\n";

  // This ends program execution
  return 0;
}

// Accessor function 
string TodoItem::description() {
  return description_;
}
int TodoItem::priority() {
  return priority_;
}
bool TodoItem::completed() {
  return completed_;
}

// Mutator Function
void TodoItem::set_description(string description) {
  description_ = description;
}
void TodoItem::set_priority(int priority) {
  if (priority >= 1 && priority <= 5) {
  priority_ = priority;
  } else {
    priority_ = 5;
  }
}
void TodoItem::set_completed(bool completed) {
  completed_ = completed;
}
// Scrub function
string Scrub(string description) {
  for (unsigned int i = 0; i < description.length(); i++) {
    if (description.at(i) == '@') {
      description.at(i) = '`';
    }
  }
  return description;  
}
// To file function
string TodoItem::ToFile() {
  string list = "";
  // how do i make the variables into strings???
  list = description_ + "@" + priority_ + "@" + completed_;
  Scrub(list);
  //cout << description_ << '@' << priority_ << completed_;
  return list;
}
