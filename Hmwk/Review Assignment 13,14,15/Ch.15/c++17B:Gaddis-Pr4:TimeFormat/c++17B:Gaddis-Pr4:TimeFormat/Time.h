//
//  Time.h
//  c++17B:Gaddis-Pr4:TimeFormat
//
//  Created by Joel Bateman on 9/24/14.
//  Copyright (c) 2014 Joel Bateman. All rights reserved.
//

#ifndef __c__17B_Gaddis_Pr4_TimeFormat__Time__
#define __c__17B_Gaddis_Pr4_TimeFormat__Time__

#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Time{
protected:
    int hour;
    int min;
    int sec;
public:
    // Default constructor Time()
    Time(){
        hour = 0; min = 0; sec = 0;
    }
   
    // Constructor
    Time(int h, int m, int s){
        hour = h; min = m; sec = s;
    }
    
    void setTime(int h, int m, int s){
        hour = h; min = m; sec = s;
    }
    
    // Accessor functions
    int getHour() const{
        return hour;
    }
    
    int getMin() const{
        if(min<10){
        cout<<"0";
        return min;
        }
        else{
            return min;
        }
    }
    
    int getSec() const{
        return sec;
    }
    
};

#endif /* defined(__c__17B_Gaddis_Pr4_TimeFormat__Time__) */
