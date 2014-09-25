//
//  numDays.cpp
//  numDays
//
//  Created by Joel Bateman on 9/24/14.
//  Copyright (c) 2014 Joel Bateman. All rights reserved.
//

#include "numDays.h"
#include <cstdlib>

void numDays::simplify(){
    days=0.0;
    if (hours>=8){
        days+=((float)hours/8);
        hours=hours%8;
    }
    else if(hours<0){
        days-=((abs(hours)/8+1));
        hours=8-(abs(hours)%8);
    }
}

numDays numDays::operator+(const numDays &r){
    numDays temp;
    
    temp.hours=hours+r.hours;
    temp.days=days+r.days;
    temp.simplify();
    return temp;
}

numDays numDays::operator-(const numDays &r){
    numDays temp;
    
    temp.hours=hours-r.hours;
    temp.days=days+r.days;
    temp.simplify();
    return temp;
}

numDays numDays::operator++(){
    hours++;
    simplify();
    return *this;
}

numDays numDays::operator--(){
    hours--;
    simplify();
    return *this;
}

numDays numDays::operator++(int){
    numDays temp(hours);
    hours++;
    simplify();
    return temp;
}

numDays numDays::operator--(int){
    numDays temp(hours);
    hours--;
    simplify();
    return temp;
}