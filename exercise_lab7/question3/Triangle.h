#pragma once

namespace Shapes{
    class Triangle{
        private :
        float Base;
        float Height;

        public:
        //this is a constructor
        Triangle ();

        // oveloaded function 
        Triangle (float  BaseOfTri, float  HeightofTri);
// the accessor methods
        float  getTheBase();
        float  getTheHeight();

        ~Triangle();
        

    };
}