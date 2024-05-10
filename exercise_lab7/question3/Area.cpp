#include "Area.h"
#include <cmath>

using namespace Shapes;

float Area::getareaOfSquare(Square lengthside){

    // the getSideLength() function is from the square.h
    // file to access  the length
    float areasquare = lengthside.getSideLength() * lengthside.getSideLength();
    
    //returns the answer 
    return areasquare;

};

float Area::getareaOfTriangle(Triangle newValues){

    float areaTriangle = (newValues.getTheBase()/2) * newValues.getTheHeight();    

}

float Area::getareaOfCircle(Shapes::Circle newRadius){


/*change the the data type of the whole program to float */
    float areaCircle = (22/7)*(newRadius.getRadius() * newRadius.getRadius())/2;
};

/*GOOD NIGHT KID!!!!!!!!*/

