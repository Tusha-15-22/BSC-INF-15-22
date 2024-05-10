#include <iostream>
//#include "Triangle.h"
#include "Area.h"
//#include "Square.h"
//#include "Circle.h"

using namespace std;
using namespace Shapes;

int main(){
    int value;
    Area CalArea;
    cout<< "choose area to be calculated:\n";
    cout <<"1. Square ";
    cout <<"2. triangle ";
    cout <<"3. circle ";
    cout <<"4. quit";
    cin >> value ;
    cout<<endl;

while (true){

    //testing condition

    if (value == 4 ){
        break;
    }

    switch (value)
    {
    case 1: {
        float side_length;


        cout << "enter the length side of square ";
        cin>>side_length;
        cout <<endl;
// this line calculate the area of the square 

        // passing a value of side length using a method or function
        Square areaOfSquare(side_length);
        cout <<"the area of square is: "<<CalArea.getareaOfSquare(areaOfSquare)<<endl;

        break;
    }

    case 2 :{
        float base, heightoftri;

        cout << "enter the base of tringle";
        cin >> base;
        cout<<endl;

        cout << "enter the height of triangle";
        cin >> heightoftri;
        cout <<endl;
//passing a value of side length using a method or function
        Triangle areaOftriangle (base ,heightoftri);
        cout << "the area of a trianlge is: "<< CalArea.getareaOfTriangle(areaOftriangle)<<endl;
                
        break;
        }

    case 3 : {
        float myradius;
        cout << "enter the radius of the circle: ";
        cin >> myradius;
        cout<< endl;
//passing a value of side length using a method or function
        Circle areaOfcircle(myradius);
        cout << "the area of the circle is:  "<< CalArea.getareaOfCircle(areaOfcircle)<<endl;
        
        break;
    }  

    default:
    cout << "the value is invalid"<<value <<endl;

        continue;
    }
}
     return 0;
}