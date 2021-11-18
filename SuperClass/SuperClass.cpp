#pragma once
#include <string>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;
int main()
{
	Shape shape;
	
	
	
	string action;
	int height;
	int width;
	int base;
	int radius;
	int area;
	cout << "This program will solve the area for the values of 3 different shapes, Rectangle, Circle, and Triangle." << "\n";
	cout << "Please enter what shape you want to solve for. Type circle, rectangle, or triangle: " << "\n";
	cin >> action;

	if (action == "rectangle") {
		Rectangle rect;
		cout << "Please enter the height: " << "\n";
		cin >> rect.height;
		cout << "Please enter the width: " << "\n";
		cin >> rect.width;
		cout << "The area of the rectangle is: " << "\n";
 		rect.getArea();
		
	}

	else if (action == "triangle") {
		Triangle tri;
		cout << "Please enter the height: " << "\n";
		cin >> tri.height;
		cout << "Please enter the base width: " << "\n";
		cin >> tri.base;
		cout << "The area of the triangle is: " << "\n";
		tri.getArea();

		
	}

	else if (action == "circle") {
		Circle circle;
		cout << "Please enter the radius: " << "\n";
		cin >> circle.radius;
		cout << "The area of the circle is: " << "\n";
		circle.getArea();
		
	}

}