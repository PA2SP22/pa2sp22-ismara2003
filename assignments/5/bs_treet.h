/*
 * Name        : Assignment 5
 * Author      : Amara Ihekwoeme
 * Description : Tree and Templates
 * Sources     : Luke Sathrum
 */
#include "BSNodeT.h"
#include <iostream>
#include <string>
#include <sstream>
using std::stringstream;
using std::string;
#ifndef BSTREET_H
#define BSTREET_H

template<typename T>
class BSTreeT {
 public:
// Constructor
BSTreeT();
// Destructor
~BSTreeT();
/* Member Functions */
int GetSize() const;
void Clear();
int Insert(T value);
bool Exists();
int Remove(T value);
BSTNode* Get();
string ToStringForwards();
string ToStringBackwards();
 private:
/* Private Data Members*/
BSTNode *root;
unsigned int size_;
/* Private Member Function */
void Clear();
int Insert(T value);
bool Exists();
int Remove(T value);
BSTNode* Get();
string ToStringForwards();
string ToStringBackwards();
};

#endif /* BSTREET_H */