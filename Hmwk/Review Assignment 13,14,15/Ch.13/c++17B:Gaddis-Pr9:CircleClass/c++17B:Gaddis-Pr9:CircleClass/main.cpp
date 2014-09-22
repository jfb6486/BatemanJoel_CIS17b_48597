//
//  main.cpp
//  c++17B:Gaddis-Pr9:CircleClass
//
//  Created by Joel Bateman on 9/21/14.
//  Copyright (c) 2014 Joel Bateman. All rights reserved.
//
#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

int main ()
{
    Circle c= NULL;
    char choice;
    float radius;
    bool keep=true;
    
    cout << "Welcome to the Circle Class\n";
    
    do{
        cout<<"Please enter a radius for this Circle\n";
        cout<<"Radius:";
        cin>>radius;
        c.setRadius(radius);
        cout<<"Area: "<<c.getArea()<<endl;
        cout<<"Diameter: "<<c.getDiameter()<<endl;
        cout<<"Circumference: "<<c.getCircumference()<<endl;
        
        cout<<"Would you like to run the Circle Class again?(y/n)\n";
        cin>>choice;
        
        if (choice=='y'){
            keep=true;
        }
        else if(choice=='n'){
            keep=false;
        }
        else{
            cout<<"Not a valid choice\n";
            keep=true;
        }
    }while(keep);
    
    return 0;
}



