/*
 * Name        : Assignment 1
 * Author      : Amara Ihekwoeme
 * Description : Working on functions
 * Sources     : 
 */

#ifndef ASSIGNMENT_1_H
#define ASSIGNMENT_1_H

// Add any includes and using statements Here
#include <string>
using namespace std;
// Declare Function Prototypes Here (What goes above main)
bool CheckAlphabetic(const string &word);

bool EncryptString(string &word, int shifts);

bool DecryptString(string &code, int shifts);

double ComputeAverage(double array[], unsigned int size);

double FindMinValue(double array[], unsigned int size);

double FindMaxValue(double array[], unsigned int size);



#endif /* ASSIGNMENT_1_H */
