/*
 * Name        : Assignment 4
 * Author      : Amara Ihekwoeme
 * Description : Tree and Templates
 * Sources     : Luke Sathrum
 */
#include "BSNodeT.h"
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
};