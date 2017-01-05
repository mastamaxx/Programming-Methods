/*
 Mark Max 2016/07/24
 Assignment 11.1: myString.cpp
 CIS 278 with Dave Harden
 
 Class myString provides one data member cString that is a dynamic memory char
 pointer intended to represent a string of variable length. The class provides
 public functions that allow string manipulation, creation, assigment, 
 concatenation, comparison, and reading from input using overloaded operators.
 
 New myString objects will always be created using dynamic memory allocation
 and always be deleted when they are done being used or being overwritten.
 */

#include <iostream>
#include <cassert>
#include "myString.h"
using namespace std;

static const int MAX_SIZE = 128;

namespace cs_mystring {

    myString::myString() {
        cString = new char[1];
        strcpy(cString, "");
    }

    
    
    
    
    
    myString::myString(const char* inCString) {
        cString = new char[strlen(inCString) + 1];
        strcpy(cString, inCString);
    }
    
    
    
    
    
    
    myString::myString(const myString& inMyString) {
        cString = new char[strlen(inMyString.cString) + 1];
        strcpy(cString, inMyString.cString);
    }
    
    
    
    
    
    
    myString::~myString() {
        delete [] cString;
    }
    
    
    
    
    
    
    myString myString::operator=(const myString& right) {
        if (this != &right) {
            delete [] cString;
            cString = new char[strlen(right.cString) + 1];
            strcpy(cString, right.cString);
        }
        return *this;
    }
    
    
    
    
    
    
    int myString::length() const {
        return strlen(cString);
    }
    
    
    
    
    
    void myString::read(istream& in, char delimiter) {
        char inString[MAX_SIZE];
        

        in.getline(inString, MAX_SIZE, delimiter);
        
        
        *this = inString;
    }
    
    
    
    
    
    ostream& operator<<(ostream& out, const myString& source) {
        out << source.cString;
        return out;
    }
    
    
    
    
    
    istream& operator>>(istream& in, myString& right) {
        char inString[MAX_SIZE];
        
        in >> inString;
        
        right = inString;
        
        return in;
    }
    
    
    
    
    
    char myString::operator[](int index) const {
        assert(index >= 0 && index < strlen(cString));
        return cString[index];
    }
    
    
    
    
    
    
    char& myString::operator[](int index) {
        assert(index >= 0 && index < strlen(cString));
        return cString[index];
    }
    
    
    
    
    
    
    bool operator<(const myString& left, const myString& right) {
        return (strcmp(left.cString, right.cString) < 0);
    }
    
    
    
    
    
    
    bool operator>(const myString& left, const myString& right) {
        return (strcmp(left.cString, right.cString) > 0);
    }
    
    
    
    
    
    
    bool operator<=(const myString& left, const myString& right) {
        return (strcmp(left.cString, right.cString) <= 0);
    }
    
    
    
    
    
    
    bool operator>=(const myString& left, const myString& right) {
        return (strcmp(left.cString, right.cString) >= 0);
    }
    
    
    
    
    
    
    bool operator==(const myString& left, const myString& right) {
        return (strcmp(left.cString, right.cString) == 0);
    }
    
    
    
    
    
    
    bool operator!=(const myString& left, const myString& right) {
        return (strcmp(left.cString, right.cString) != 0);
    }
    
    
    
    
    
    myString operator+(const myString& left, const myString& right) {
        char *result;
        result = new char[strlen(left.cString) + strlen(right.cString) + 1];
        
        strcpy(result, left.cString);
        strcat(result, right.cString);
        
        myString myResult(result);
        
        delete [] result;
        
        return myResult;
    }
    
    
    
    
    
    myString myString::operator+=(const myString& right) {
        *this = *this + right;
        return *this;
    }
}

