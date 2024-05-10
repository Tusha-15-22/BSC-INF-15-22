#pragma   once 
//#include <iostream>

//using namespace std;

namespace Shapes {
    class Square{
        private:
        float side_length;

        public:

        // constructor
        Square();
// an overloaded constructor
        Square (float lengthOfSquare);


        float getSideLength();

        ~Square();




    };

}