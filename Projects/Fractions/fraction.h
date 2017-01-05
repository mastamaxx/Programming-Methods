/*
 Mark Max 2016/07/17
 Assignment 9.1: fraction.h
 CIS 278 with Dave Harden
 
 Class fraction provides two instance variables numerator and denominator that
 represent a fraction value in its reduced form. The class provides public
 functions for overriding standard C++ arthimetic, conditional, and incremental 
 operators.
 */

#ifndef fraction_h
#define fraction_h

#include <iostream>

namespace cs_fraction {
    class fraction {
        public:
            /*
             Constructor for the fraction class takes two int parameters,
             inNumerator and inDenominator, and creates an object representing
             a fraction by storing inNumerator and inDenominator in member 
             variables numerator and denominator.
             
             pre: none
             post: fraction object is created
            */
            fraction(int inNumerator = 0, int inDenominator = 1);
        
        
        
        
        
            /*
             This function to overload the << operator in the fraction class 
             prints the fraction object to standard out in a mixed number format
             if applicable or in a standard fraction if not.
             
             pre: fraction object
             post: fraction object is printed to standard out
             */
            friend std::ostream& operator<<(std::ostream& out,
                                            const fraction& right);
        
        
        
        
        
            /*
             This function to overload the >> operator accepts and stores a
             fraction into a new fraction object. It accepts mixed numbers,
             fractions, and whole numbers.
             
             pre: none
             post: fraction object is created from standard in
             */
            friend std::istream& operator>>(std::istream& in,
                                            fraction& right);
        
        
        
        
            /*
             This function to overload the < operator allows for the comparison
             if two fractions or a fraction and an int. It returns true if the
             fraction parameter left is less than the fraction parameter right.
             
             pre: two fraction objects exist
             post: A boolean value of true is returned if the fraction object
             left is less than the fraction object on the right
             */
            friend bool operator<(const fraction& left, const fraction& right);
        
        
        
        
        
            /*
             This function to overload the > operator allows for the comparison
             if two fractions or a fraction and an int. It returns true if the
             fraction parameter left is greater than the fraction parameter 
             right.
             
             pre: two fraction objects exist
             post: A boolean value of true is returned if the fraction object
             left is greater than the fraction object on the right
             */
            friend bool operator>(const fraction& left, const fraction& right);
        
        
        
        
        
            /*
             This function to overload the >= operator allows for the comparison
             if two fractions or a fraction and an int. It returns true if the
             fraction parameter left is greater than or equal to the fraction 
             parameter right.
             
             pre: two fraction objects exist
             post: A boolean value of true is returned if the fraction object
             left is greater than or equal to the fraction object on the right
             */
            friend bool operator>=(const fraction& left, const fraction& right);
        
        
        
        
        
            /*
             This function to overload the <= operator allows for the comparison
             if two fractions or a fraction and an int. It returns true if the
             fraction parameter left is less than or equal to the fraction 
             parameter right.
             
             pre: two fraction objects exist
             post: A boolean value of true is returned if the fraction object
             left is less than or equal to the fraction object on the right
             */
            friend bool operator<=(const fraction& left, const fraction& right);
        
        
        
        
        
            /*
             This function to overload the == operator allows for the comparison
             if two fractions or a fraction and an int. It returns true if the
             fraction parameter left is equal to the fraction parameter right.
             
             pre: two fraction objects exist
             post: A boolean value of true is returned if the fraction object
             left is equal to the fraction object on the right
             */
            friend bool operator==(const fraction& left, const fraction& right);
        
        
        
        
        
            /*
             This function to overload the != operator allows for the comparison
             if two fractions or a fraction and an int. It returns true if the
             fraction parameter left is not equal to the fraction parameter 
             right.
             
             pre: two fraction objects exist
             post: A boolean value of true is returned if the fraction object
             left is not equal to the fraction object on the right
             */
            friend bool operator!=(const fraction& left, const fraction& right);
        
        
        
        
        
            /*
             This function to overload the + operator allows for the addition
             of two fractions or a fraction and an int. It returns a fraction
             object that is the result of the addition of fraction parameters
             right and left.
             
             pre: two fraction objects exist
             post: A fraction object is returned that equals the addition of
             the two existing fraction objects
             */
            friend fraction operator+(const fraction& left,
                                            const fraction& right);
        
        
        
        
        
            /*
             This function to overload the - operator allows for the addition
             of two fractions or a fraction and an int. It returns a fraction
             object that is the result of fraction parameters left minus right.
             
             pre: two fraction objects exist
             post: A fraction object is returned that equals the subtraction of
             the two existing fraction objects
             */
            friend fraction operator-(const fraction& left,
                                            const fraction& right);
        
        
        
        
        
            /*
             This function to overload the * operator allows for the 
             multiplication of two fractions or a fraction and an int. It 
             returns a fraction object that is the result of the multiplication
             of the fraction parameters left and right.
             
             pre: two fraction objects exist
             post: A fraction object is returned that equals the multiplication 
             of the two existing fraction objects
             */
            friend fraction operator*(const fraction& left,
                                            const fraction& right);
        
        
        
        
        
            /*
             This function to overload the + operator allows for the division
             of two fractions or a fraction and an int. It returns a fraction
             object that is the result of fraction parameter left divided by
             fraction parameter right.
             
             pre: two fraction objects exist
             post: A fraction object is returned that equals the division of
             the two existing fraction objects
             */
            friend fraction operator/(const fraction& left,
                                            const fraction& right);
        
        
        
        
        
            /*
             This function to overload the += operator allows for a fraction
             object to be increased by a fraction object parameter right
             
             pre: two fraction objects exist
             post: The fraction object on the left side of the assignment will
             have it's pre value plus the value of the fraction object on the
             right side of the assignment statement.
             */
            fraction operator+=(const fraction& right);
        
        
        
        
        
            /*
             This function to overload the -= operator allows for a fraction
             object to be decreased by a fraction object parameter right
             
             pre: two fraction objects exist
             post: The fraction object on the left side of the assignment will
             have it's pre value minus the value of the fraction object on the
             right side of the assignment statement.
             */
            fraction operator-=(const fraction& right);
        
        
        
        
        
            /*
             This function to overload the *= operator allows for a fraction
             object to be multipled by a fraction object parameter right and
             the result stored in the fraction object on the left side of the
             assignment.
             
             pre: two fraction objects exist
             post: The fraction object on the left side of the assignment will
             have it's pre value times the value of the fraction object on the
             right side of the assignment statement.
             */
            fraction operator*=(const fraction& right);
        
        
        
        
        
            /*
             This function to overload the /= operator allows for a fraction
             object on the left side of the assignment to be divided by a 
             fraction object right, on the right side of the assignment, and
             then the result stored in the object on the left side.
             
             pre: two fraction objects exist
             post: The fraction object on the left side of the assignment will
             have it's pre value divided by the value of the fraction object on 
             the right side of the assignment statement.
             */
            fraction operator/=(const fraction& right);
        
        
        
        
        
            /*
             This function to overload the prefix ++ operator allows a fraction
             object to be incremented by one during a statement.
             
             pre: a fraction object exists
             post: The fraction object is incremented by one mid statement
             */
            fraction operator++();
        
        
        
        
        
            /*
             This function to overload the postfix ++ operator allows a fraction
             object to be incremented by one at the end of a statement.
             
             pre: a fraction object exists
             post: The fraction object is incremented by one post statement
             */
            fraction operator++(int);
        
        
        
        
        
            /*
             This function to overload the prefix -- operator allows a fraction
             object to be decreased by one during a statement.
             
             pre: a fraction object exists
             post: The fraction object is decremented by one mid statement
             */
            fraction operator--();
        
        
        
        
        
            /*
             This function to overload the postfix -- operator allows a fraction
             object to be incremented by one during a statement.
             
             pre: a fraction object exists
             post: The fraction object is decreased by one post statement
             */
            fraction operator--(int);
        private:
            int numerator;
            int denominator;
            void simplify();
            int greatestCommonFactor(int num1, int num2);
    };
}

#endif