#pragma once

namespace Shapes {
    class Circle
    {
    private:
    float Radius;
        /* data */
    public:
        Circle();
// overloaded constructor 
        Circle(float  radiusCircle);

// accessor methods
        float  getRadius();

        ~Circle();
    };
    
   

    
}