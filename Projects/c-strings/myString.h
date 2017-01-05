/*
 Mark Max 2016/07/24
 Assignment 11.1: myString.cpp
 CIS 278 with Dave Harden
 
 Class myString objects are c-strings and the class provides public functions 
 that allow string manipulation, creation, assigment, concatenation, comparison,
 and reading from input using overloaded operators.
 
 
 
 
 No argument constructor creates a blank myString object.
 pre: no myString object exists
 post: blank myString object is created
 
 myString();
 
 
 
 
 
 
 C-string argument constructor creates a myString object by storing inCString
 into the myString private data member.
 pre: no myString object exists
 post: myString object is created that stores the parameter C-string
 
 myString(const char* inCString);
 
 
 
 
 
 
 myString argument constructor creates a copy of the myString passed as a
 parameter
 pre: a myString object exists
 post: the existing myString object is copied into a new myString object
 
 myString(const myString& inMyString);
 
 
 
 
 
 
 myString destructor explicitly deletes the private dynamic memory data member
 stored in the calling object.
 pre: a myString object exists
 post: the myString object is deleted and its memory is deallocated
 
 ~myString();
 
 
 
 
 
 
 This function overloads the = operator by accepting a myString parameter, 
 right, that is the right side of the = operator and if the parameter is not the
 calling object it will set the calling object equal to the parameter. It does 
 this by deallocating the calling object, reallocating the calling object with 
 the size of length of right + 1, and using strcpy to copy the data member of
 right into the data member of the calling object. If the right side of the =
 operator is a C-string it will be automatically converted to a myString.
 pre: one or two myString object(s) exist
 post: the calling myString object will now equal the right side of the = 
 operator
 
 myString operator=(const myString& right);
 
 
 
 
 
 
 This function returns the length of the C-string data member of the calling
 object.
 pre: a myString object exists
 post: an int is returned that equals the length of the data member in the
 calling object
 
 int length() const;
 
 
 
 
 
 
 This function will read input into the calling objects data member up until
 the char parameter delimiter is found in the input. It does this by creating
 a static c-String, storing the input into that c-String using the three
 argument version of getline, and then sets the calling object equal to the
 static c-String using the overloaded = operator.
 pre: user or file input exists, a delimiter has been chosen, and a myString
 object exists
 post: the calling myString object has the input, up to the delimiter, stored
 in its private data member
 
 void read(std::istream& in, char delimiter);
 
 
 
 
 
 
 This function to overload the << operator accepts a myString parameter, source,
 and prints the c-string data member in source to standard out.
 pre: a myString object exists
 post: the myString object is printed to standard out
 
 friend std::ostream& operator<<(std::ostream& out, const myString& source);
 
 
 
 
 
 
 This function to overload the >> operator reads the next string before
 whitespace into the myString object, right, that is on the right side of the
 >> operator. In the function it uses the >> operator to get a C-string from
 input and then uses the overloaded = operator to set right equal to the input
 C-String.
 pre: a myString object exists and file or user input exists
 post: myString object has next string in input before whitespace stored in its
 private data member.
 
 friend std::istream& operator>>(std::istream& in, myString& right);

 
 
 
 
 
 This function to overload the [] operator allows a const myString calling 
 object to get the char value at a given index of the calling object.
 pre: a const myString object exists, an index is specified
 post: returns the char value at the index of the C-String data member stored
 in the calling myString object.
 
 char operator[] (int index) const;
 
 
 
 
 
 
 This function to overload the [] operator allows a myString calling object to
 get and change the char value at a given index of the calling objects data
 member.
 pre: a myString object exists, an index is specified
 post: returns the memory address of the char at the specified index in the 
 C-String data member stored in the calling myString object
 
 char& operator[] (int index);
 
 
 
 
 
 
 This function to overload the < operator accepts two myString parameters or
 one myString and one C-String parameters called left and right, representing if
 the parameter is on the left or right side of the <. It returns true if left
 if alphabetically before right.
 pre: one or two myString objects exist
 post: a boolean value is returned
 
 friend bool operator<(const myString& left, const myString& right);
 
 
 
 
 
 
 This function to overload the > operator accepts two myString parameters or
 one myString and one C-String parameters called left and right, representing if
 the parameter is on the left or right side of the >. It returns true if left
 if alphabetically after right.
 pre: one or two myString objects exist
 post: a boolean value is returned
 
 friend bool operator>(const myString& left, const myString& right);
 
 
 
 
 
 
 This function to overload the <= operator accepts two myString parameters or
 one myString and one C-String parameters called left and right, representing if
 the parameter is on the left or right side of the <=. It returns true if left
 if alphabetically before or the same as right.
 pre: one or two myString objects exist
 post: a boolean value is returned
 
 friend bool operator<=(const myString& left, const myString& right);
 
 
 
 
 
 
 This function to overload the >= operator accepts two myString parameters or
 one myString and one C-String parameters called left and right, representing if
 the parameter is on the left or right side of the >=. It returns true if left
 if alphabetically after or the same as right.
 pre: one or two myString objects exist
 post: a boolean value is returned
 
 friend bool operator>=(const myString& left, const myString& right);
 
 
 
 
 
 
 This function to overload the == operator accepts two myString parameters or
 one myString and one C-String parameters called left and right, representing if
 the parameter is on the left or right side of the ==. It returns true if left
 if alphabetically the same as right.
 pre: one or two myString objects exist
 post: a boolean value is returned
 
 friend bool operator==(const myString& left, const myString& right);
 
 
 
 
 
 
 This function to overload the != operator accepts two myString parameters or
 one myString and one C-String parameters called left and right, representing if
 the parameter is on the left or right side of the !=. It returns true if left
 if alphabetically different than right.
 pre: one or two myString objects exist
 post: a boolean value is returned
 
 friend bool operator!=(const myString& left, const myString& right);
 
 
 
 
 
 
 This function to overload the + operator accepts two myString parameters or one
 myString and one C-String parameters called left and right, representing if the
 parameter is on the left or right side of the +. It returns a myString object
 that is the concatenation of left and right. It does this by creating a new
 dynamic char array with just enough chars to store the concatenation, copying
 left into the new char array, using strcat to concatenate the new array with
 right, creating a new myString object with the new char array as the parameter,
 deallocating the new char array, and then returning the new myString object.
 pre: one or two myString objects exist.
 
 post: a myString object that is the concatenation of the existing object(s)
 and/or C-String(s) is returned.
 
 friend myString operator+(const myString& left, const myString& right);
 
 
 
 
 
 
 This function to overload the += operator accepts one myString parameter, 
 right, and stores the concatenation of the calling object and right into the
 calling object. It does this by using the overloaded + and = operators already
 defined in this class.
 
 pre: two myString objects exist
 post: the calling myString object will equal the concatenation of its original 
 state and the other myString object.
 myString operator+=(const myString& right);
 */

#ifndef myString_h
#define myString_h

#include <stdio.h>
#include <iostream>

namespace cs_mystring {
    class myString {
        public:
            myString();
            myString(const char* inCString);
            myString(const myString& inMyString);
            ~myString();
            myString operator=(const myString& right);
            int length() const;
            void read(std::istream& in, char delimiter);
            friend std::ostream& operator<<(std::ostream& out,
                                                const myString& source);
            friend std::istream& operator>>(std::istream& in,
                                            myString& right);
            char operator[] (int index) const;
            char& operator[] (int index);
            friend bool operator<(const myString& left, const myString& right);
            friend bool operator>(const myString& left, const myString& right);
            friend bool operator<=(const myString& left, const myString& right);
            friend bool operator>=(const myString& left, const myString& right);
            friend bool operator==(const myString& left, const myString& right);
            friend bool operator!=(const myString& left, const myString& right);
            friend myString operator+(const myString& left,
                                      const myString& right);
            myString operator+=(const myString& right);
        private:
            char *cString;
    };
}

#endif /* mystring_hpp */
