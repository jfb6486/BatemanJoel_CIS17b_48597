//
//  Circle.h
//  c++17B:Gaddis-Pr9:CircleClass
//
//  Created by Joel Bateman on 9/21/14.
//  Copyright (c) 2014 Joel Bateman. All rights reserved.
//

#ifndef c__17B_Gaddis_Pr9_CircleClass_Circle_h
#define c__17B_Gaddis_Pr9_CircleClass_Circle_h

#include <iostream>

using namespace std;

class Circle
{
protected:
    float radius;
    float pi=3.14159;
    float area, dia, circum;
    
public:
    Circle(){radius=0.0;}
    
    Circle(float r){
        radius=r;
    }
    
    void setRadius(float r){
        radius=r;
    }
    
    float getRadius(){
        return radius;
    }
    
    float getArea(){
        area=pi*radius*radius;
        return area;
    }
    
    float getDiameter(){
        dia=radius*2;
        return dia;
    }
    
    float getCircumference(){
        circum=2*pi*radius;
        return circum;
    }
};

#endif
