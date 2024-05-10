#include "Rectangle.h"

// a constructor 
Rectangle :: Rectangle (){
    length = 0.0;
    width = 0.0;
}

Rectangle::Rectangle (float LengTH, float WidTH){
    length = LengTH;
    width =  WidTH;

}

float Rectangle :: setLength (){
    return length;
}

float Rectangle :: setWidth (){
    return width;
}
//accessor methods 
float Rectangle :: getArea(){
    return length * width;
}

// destructor 
Rectangle ::~Rectangle(){}




//float setLength ();
    //float setWidth ();

   // float getArea();
