#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){
	double squareSide, radius, circleArea, squareArea, uncoveredAreas, circumference, perimeter, distinction;
	cout << "Enter length of side of square: ";
	cin >> squareSide;
	
	radius = (squareSide*(sqrt(2)))/2;	
	circleArea = 3.14*radius*radius;
	squareArea = squareSide*squareSide;
	uncoveredAreas = circleArea - squareArea;
	circumference = 2*3.14*radius;
	perimeter = 4*squareSide;
	distinction = circumference - perimeter;
	
	cout << "Circle area = " << circleArea
	<< ", the area of circle sections uncovered by the square = " 
	<< uncoveredAreas << ", the length of circle is greater than the length of sides of the square by " << distinction;
	
	return 0;
}
