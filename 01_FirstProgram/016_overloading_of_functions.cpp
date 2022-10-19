//In this exercise you will create a program that computes the area of two shapes, a squareand a rectangle, by calling the overloaded function find_area.
//
//Begin by declaring the function prototypes for the square find_area functionand the rectangle find_area function.
//
//The square find_area function is passed an integer valueand returns an integer value.
//
//The rectangle find_area function is passed two double valuesand returns a double value.
//
//Remember that both function prototypes should have the same function name find_area.
//
//Now that the function prototypes have been declared, at the bottom of the file define both functions.
//
//The square find_area function will be passed the argument side_lengthand return the area of the square.The formula for the area of a square is side_length* side_length.You may use the <cmath> function pow to compute this value if you wish.
//
//The rectangle find_area function will be passed the arguments lengthand widthand return the area of the rectangle.The formula for the area of a rectangle is length* width.
//
//Now, from the function body of area_calc, declareand initialize the variables square_areaand rectangle_area by calling the find_area functionand passing the appropriate arguments which are listed below.
//
//The square has a side_length of 2.
//
//The rectangle has a length of 4.5 and a width of 2.3.

#include <iostream>;
#include <cmath>;
using namespace std;


int find_area(int side_length);
double find_area(double length, double width);


int find_area(int side_length) {
    return pow(side_length, 2);
}
double find_area(double length, double width) {
    return length * width;
}

void area_calc() {

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    int square_area{ find_area(2) };
    double rectangle_area{ find_area(4.5, 2.3) };



    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}
