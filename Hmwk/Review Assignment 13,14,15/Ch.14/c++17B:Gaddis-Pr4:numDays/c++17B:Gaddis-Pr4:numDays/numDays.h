//
//  numDays.h
//  numDays
//
//  Created by Joel Bateman on 9/24/14.
//  Copyright (c) 2014 Joel Bateman. All rights reserved.
//

/*
 Design a class called NumDays. The class's purpose is to store a
 value that represents a number of work hours and convert it to a
 number of days. For example, 8 hours would be converted to 1 day, 12
 hours would be converted to 1.5 days, and 18 hours would be converted
 to 2.25 days. The class should have a constructor that accepts a
 number of hours, as well as member functions for storing and
 retrieving the hours and days. The class should also have the
 following overloaded operators:
 
 + Addition operator.When twoNumDays objects are added together, the
 over - loaded + operator should return the sum of the two object hours
 members.
 
 - Subtraction operator.When one NumDays object is subtracted from
 another, the overloaded - operator should return the difference of
 the two objects hours members.
 
 ++ Pre x and post x increment operators. These operators should
 increment the number of hours stored in the object. When
 incremented, the number of days should be automatically
 recalculated.
 
 -- Pre x and post x decrement operators. These operators should
 decrement the number of hours stored in the object. When
 decremented, the number of days should be automatically recalculated
 */

#ifndef __numDays__numDays__
#define __numDays__numDays__

#include <stdio.h>
#include <cstdlib>
#include <iostream>

using namespace std;

class numDays; // Forward Declaration

// Function Prototypes for Overloaded Stream
ostream &operator <<(ostream &, const numDays &);
istream &operator <<(istream &, numDays &);


class numDays{
private:
    int hours=0;        // To hold the # of hrs
    float days=0;         // To hold the # of days
    void simplify();    // Defined in numDays.cpp
    
public:
    // Constructor
    numDays(int h=0){
        hours=h;
        void simplify();
    }
    
    // Deconstructor
    ~numDays(){}
    
    // Mutator methods
    void setHours(int h){
        hours=h;
        simplify();
    }
    
    void setDays(float d){
        days=d;
    }
    
    // Accessors methods
    int getHours() const{
        return hours;
    }
    
    float getDays() {
        return days;
    }
    
    // Overloaded operator functions
    numDays operator +(const numDays &);  // Overloaded +
    numDays operator -(const numDays &);  // Overloaded -
    numDays operator ++();                // Prefix Overloaded ++
    numDays operator --();                // Prefix Overloaded --
    numDays operator ++(int);           // Postfix Overloaded ++
    numDays operator --(int);           // Postfix Overloaded --
    
    // Friends
    friend ostream &operator << (ostream &, const numDays &);
    friend istream &operator >> (istream &, numDays &);
};
#endif /* defined(__numDays__numDays__) */



