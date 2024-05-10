#pragma once

#include <iostream> 

using namespace std;

class Rectangle{
    private :

    float length;
    float width;

    public :

// default destructor
     Rectangle ();

    Rectangle (float length, float width);

    float setLength ();
    float setWidth ();

    float getArea();

    // destructor 
    ~Rectangle();






};