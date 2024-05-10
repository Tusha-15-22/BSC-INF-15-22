#include "Square.h"

using namespace Shapes;

Square:: Square(){
    side_length = 0;
};

Square :: Square (float  lengthOfSquare){
    side_length = lengthOfSquare;
}
 
 //Square:: Square()

 float  Square:: getSideLength(){
    return side_length;
  };

Shapes::Square::~Square(){
    
}