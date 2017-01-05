/*
 Mark Max 2016/07/07
 Assignment 9.1: fraction.cpp
 CIS 278 with Dave Harden
 
 Private data members in this class includes two int variables, numerator and
 denominator, that represent the numerator and denominator in a fraction.
 fraction objects will always be in their simplest form.
 */


#include "fraction.h"
#include <cassert>
using namespace std;

namespace cs_fraction {
    
    fraction::fraction(int inNumerator, int inDenominator) {
        assert(inDenominator != 0);
    
        numerator = inNumerator;
        denominator = inDenominator;
        
        simplify();
    }

    
    
    
    /*
     Function simplify will reduce the calling fraction objects numerator and
     denominator by their greatest common factor. It will also convert fractions
     with both negative numerators and denominators to positive fractions. This
     function is run any time a fraction object is created or arithmetic is
     performed on fraction objects.
     
     pre: non-simplified fraction object due to initial creation or arthimetic
     post: current fraction object is simplified.
     */
    void fraction::simplify() {
        if (denominator < 0) {
            numerator *=  -1;
            denominator *= -1;
        }
        
        if (numerator == 0) {
            denominator = 1;
        } else {
            int GCF = greatestCommonFactor(abs(numerator), denominator);
            numerator /= GCF;
            denominator /= GCF;
        }
    }
    
    
    
    
    /*
     Function greatestCommonFactor accepts two int parameters, num1 and num2, and
     returns the greatest common factor between num1 and num2. It does this by
     bruteforce checking every number between 1 and the lowest of num1 and num2 to
     see if it is a factor of both num1 and num2.
     
     pre: accepts two integers
     post: returns the greatest common factor of those two integers
     */
    int fraction::greatestCommonFactor(int num1, int num2) {
        int low;
        int GCF = 1;
        
        // find the lowest between num1 and num2 to reduce for loop iterations
        if (num1 < num2) {
            low = num1;
        } else {
            low = num2;
        }
        
        // for loop checks all values 2 to low to find the greatest common factor
        for (int i = 2; i <= low; i++) {
            if (num1%i == 0 && num2%i == 0) {
                GCF = i;
            }
        }
        
        return GCF;
    }
    
    
    
    
    
    
    ostream& operator<<(ostream& out, const fraction& right)
    {
        if (right.denominator == 1) {
            out << right.numerator;
        } else if (abs(right.numerator) < right.denominator) {
            out << right.numerator << "/" << right.denominator;
        } else {
            out << right.numerator / right.denominator << "+"
                << abs(right.numerator) % right.denominator << "/"
                << right.denominator;
        }
        
        return out;
    }
    
    
    
    
    
    istream& operator>>(istream& in, fraction& right) {
        int temp;
        in >> temp;
        if (in.peek() == '+'){
            char tempChar1;
            char tempChar2;
            int inMixedNumerator;
            int inWholeNumber = temp;
            in >> tempChar1;
            in >> inMixedNumerator;
            in >> tempChar2;
            in >> right.denominator;
            
            if (inWholeNumber > 0) {
                right.numerator = inWholeNumber * right.denominator
                        + inMixedNumerator;
            } else {
                right.numerator = inWholeNumber * right.denominator
                        - inMixedNumerator;
            }
            right.simplify();
        } else if (in.peek() == '/'){
            right.numerator = temp;
            char tempChar;
            in >> tempChar;
            in >> right.denominator;
            right.simplify();
        } else {
            right.numerator = temp;
        }
        return in;
    }
    
    
    
    
    
    
    bool operator<(const fraction& left, const fraction& right) {
        return left.numerator * right.denominator <
                right.numerator * left.denominator;
    }
    
    
    
    
    
    
    bool operator>(const fraction& left, const fraction& right) {
        return left.numerator * right.denominator >
                right.numerator * left.denominator;
    }
    
    
    
    
    
    
    bool operator>=(const fraction& left, const fraction& right) {
        return left.numerator * right.denominator >=
                right.numerator * left.denominator;
    }
    
    
    
    
    
    
    bool operator<=(const fraction& left, const fraction& right) {
        return left.numerator * right.denominator <=
                right.numerator * left.denominator;
    }
    
    
    
    
    
    
    bool operator==(const fraction& left, const fraction& right) {
        return left.numerator * right.denominator ==
                right.numerator * left.denominator;
    }
    
    
    
    
    
    
    bool operator!=(const fraction& left, const fraction& right) {
        return left.numerator * right.denominator !=
                right.numerator * left.denominator;
    }
    
    
    
    
    
    
    fraction operator+(const fraction& left, const fraction& right) {
        fraction result;
        
        result.numerator = left.numerator * right.denominator + left.denominator
                * right.numerator;
        result.denominator = left.denominator * right.denominator;
        
        result.simplify();
        
        return result;
    }
    
    
    
    
    
    
    fraction operator-(const fraction& left, const fraction& right) {
        fraction result;
        
        result.numerator = left.numerator * right.denominator - left.denominator
                * right.numerator;
        result.denominator = left.denominator * right.denominator;
        
        result.simplify();
        
        return result;
    }
    
    
    
    
    
    
    fraction operator*(const fraction& left, const fraction& right) {
        fraction result;
        
        result.numerator = left.numerator * right.numerator;
        result.denominator = left.denominator * right.denominator;
        
        result.simplify();
        
        return result;
    }
    
    
    
    
    
    
    fraction operator/(const fraction& left, const fraction& right) {
        fraction result;
        
        result.numerator = left.numerator * right.denominator;
        result.denominator = left.denominator * right.numerator;
        
        result.simplify();
        
        return result;
    }
    
    
    
    
    
    
    fraction fraction::operator+=(const fraction& right) {
        *this = *this + right;
        return *this;
    }
    
    
    
    
    
    
    fraction fraction::operator-=(const fraction& right) {
        *this = *this - right;
        return *this;
    }
    
    
    
    
    
    
    fraction fraction::operator*=(const fraction& right) {
        *this = *this * right;
        return *this;
    }
    
    
    
    
    
    
    fraction fraction::operator/=(const fraction& right) {
        *this = *this / right;
        return *this;
    }
    
    
    
    
    
    
    fraction fraction::operator++() {
        *this = *this + 1;
        return *this;
    }
    
    
    
    
    
    
    fraction fraction::operator++(int) {
        fraction temp(numerator, denominator);
        *this = *this + 1;
        return temp;
    }
    
    
    
    
    
    
    fraction fraction::operator--() {
        *this = *this - 1;
        return *this;
    }
    
    
    
    
    
    
    fraction fraction::operator--(int){
        fraction temp(numerator, denominator);
        *this = *this - 1;
        return temp;
    }
}