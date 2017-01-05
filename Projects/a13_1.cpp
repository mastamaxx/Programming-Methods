/*
 Mark Max 2016/07/31
 Assignment 13.1: a13_1.cpp
 CIS 278 with Dave Harden
 
 This program contains two functions that can be used to reverse c-strings or
 subsections of c-strings. One of the functions uses recursion.
 */

#include <iostream>
using namespace std;

void reverseWithinBounds(char cstring[], int startIndex, int endIndex);
void reverseCstring(char cstring[]);



int main(int argc, const char * argv[]) {
    
    char cstring[] = "hello world";
    cout << "cstring initially = " << cstring << endl;
    
    reverseWithinBounds(cstring, 3, 7);
    cout << "cstring after reverseWithinBounds = " << cstring << endl;
    
    reverseCstring(cstring);
    cout << "cstring after reverseCstring = " << cstring << endl;
}






/*
 Function reverseWithinBounds accepts a c-string argument, cstring, and two int
 arguments startIndex and endIndex. It reverses the section of cstring from
 startIndex to endIndex. The function uses recur
 
 Pre: a c-string exists and a starting and ending index are chosen
 Post: the section of the c-string between startIndex and endIndex is reversed
 */
void reverseWithinBounds(char cstring[], int startIndex, int endIndex) {
    if (endIndex - startIndex == 1) {
        swap(cstring[startIndex], cstring[endIndex]);
    } else if (endIndex - startIndex > 1) {
        swap(cstring[startIndex], cstring[endIndex]);
        reverseWithinBounds(cstring, startIndex + 1, endIndex - 1);
    }
}






/*
 Function reverseCstring accepts a c-string argument and reverses the argument.
 It does this by calling reverseWithinBounds and passing the full length of
 cstring as the arguments.
 
 pre: a cstring exists
 post: the cstring is reversed.
 */
void reverseCstring(char cstring[]) {
    reverseWithinBounds(cstring, 0, strlen(cstring) - 1);
}