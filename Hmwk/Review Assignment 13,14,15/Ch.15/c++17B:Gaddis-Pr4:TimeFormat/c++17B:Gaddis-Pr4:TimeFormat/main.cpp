//
//  main.cpp
//  c++17B:Gaddis-Pr4:TimeFormat
//
//  Created by Joel Bateman on 9/24/14.
//  Copyright (c) 2014 Joel Bateman. All rights reserved.
//

#include <iostream>
#include "MilTime.h"

using namespace std;

int main(int argc, const char * argv[]){
    int hours;
    int sec;
    
    bool keep=true; // bool variable for reuse of program w/o restart
    char choice;    // varible for User choice to restart or exit program
    
    do{
        // Prompt user for number of hours worked
        cout<<"Enter the hour and seconds in Military Time\n";
        cout<<"Hours: ";
        // Input hours
        cin>>hours;
        cout<<"Seconds: ";
        cin>>sec;
        
        MilTime newDay(hours, sec);
        newDay.setTime(hours, sec);
        
        cout<<endl;

        // Print how many days
        cout<<"Military hour: "<<newDay.getHour()<<":"<<newDay.getMin()
        <<":"<<newDay.getSec()<<endl;
        cout<<"Standard hour: "<<newDay.getStandHr()<<":"<<newDay.getMin()
        <<":"<<newDay.getSec()<<endl;
        
        // Prompt User for choice to exit or restart
        cout<<"Would you like to run the program again?(y/n)\n";
        cout<<"Choice: ";
        cin>>choice;
        if(choice=='y'){
            keep=true;
        }
        else if(choice=='n'){
            keep=false;
        }
        else{
            cout<<"Not a valid choice...restarting program\n";
        }
    }while(keep);
    
    
    return 0;
}
