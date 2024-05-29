#pragma once 

class Polygon {
    protected:
    int mWidth;
    int mHieght;

    public :
    void SetValues(int Width, int Height);
    virtual int Area ();

};