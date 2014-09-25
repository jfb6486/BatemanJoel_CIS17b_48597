//
//  MilTime.h
//  c++17B:Gaddis-Pr4:TimeFormat
//
//  Created by Joel Bateman on 9/24/14.
//  Copyright (c) 2014 Joel Bateman. All rights reserved.
//
/*
 Design a class called MilTime that is derived from the Time class. The MilTime class should
 convert time in military (24-hour) format to the standard time format used by the Time class.
 The class should have the following member variables:
 
 milHours: Contains the hour in 24-hour format. For example, 1:00 pm would
 be stored as 1300 hours, and 4:30 pm would be stored as 1630
 hours.
 
 milSeconds: Contains the seconds in standard format.
 
 The class should have the following member functions:
 
 Constructor: The constructor should accept arguments for the hour and seconds, in military
 format. The time should then be converted to standard time and stored in the hours, min, and
 sec variables of the Time class.
 
 setTime: Accepts arguments to be stored in the milHours and milSeconds variables. The time
 should then be converted to standard time and stored in the hours, min, and sec variables of
 the Time class.
 
 getHour: Returns the hour in military format.
 
 getStandHr: Returns the hour in standard format.
 
 Demonstrate the class in a program that asks the user to enter the time in military for-
 mat. The program should then display the time in both military and standard format.
 Input Validation: The MilTime class should not accept hours greater than 2359, or less than
 0. It should not accept seconds greater than 59 or less than 0.
 */

#ifndef c__17B_Gaddis_Pr4_TimeFormat_MilTime_h
#define c__17B_Gaddis_Pr4_TimeFormat_MilTime_h

#include "Time.h"

using namespace std;

class MilTime : public Time{
protected:
    int milHours;
    int milSeconds;
    
public:
    // Constructor
    MilTime(int mH, int mS){
        milHours=mH;
        milSeconds=mS;
    }
    
    void setTime(int mH, int mS){
        
        if (mH<=12 && mH>0){
            hour=mH;
            min=milSeconds/60;
            sec=milSeconds%60;
            Time(hour, min, sec);
        }
        else if(mH>12 && mH<24){
            hour=mH-12;
            min=milSeconds/60;
            sec=milSeconds%60;
            Time(hour, min, sec);
        }
        else{
            cout<<"Time value does not fit constraints\n";
        }
 
    }
    
    int getHour() const{
        return milHours;
    }
    
    int getStandHr() const{
        return hour;
    }
};
#endif

