//
//  main.cpp
//  numDays
//
//  Created by Joel Bateman on 9/21/14.
//  Copyright (c) 2014 Joel Bateman. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "numDays.h"

using namespace std;

int main(int argc, const char * argv[])
{
    int hours;      // Used to hold user hours input
    numDays obj;    // numDays object to use numDays class
    bool keep=true; // bool variable for reuse of program w/o restart
    char choice;    // varible for User choice to restart or exit program
    
    do{
        // Prompt user for number of hours worked
        cout<<"Enter the number of hours worked\n";
        cout<<"Hours: ";
        // Input hours
        cin >> hours;
        
        cout<<endl;
        
        // Converts from hours into days
        obj.setHours(hours);
        
        // Print how many days
        cout<<"Days: "<<setprecision(3)<<obj.getDays()<<endl<<endl;
        
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

