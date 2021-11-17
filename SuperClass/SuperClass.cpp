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
	cout << "This program will solve the area for the values of 3 different shapes, Rectangle, Circle, and Triangle." << "\n";
	cout << "Please enter what shape you want to solve for. Type circle, rectangle, or triangle: " << "\n";
	cin >> action;

	if (action == "rectangle") {
		cout << "Please enter the height: " << "\n";
		cin >> height;
		cout << "Please enter the width: " << "\n";
		cin >> width;
		Rectangle.getArea();
	}

	else if (action == "triangle") {
		cout << "Please enter the height: " << "\n";
		cin >> height;
		cout << "Please enter the base width: " << "\n";
		cin >> base;
		Triangle.getArea();
	}

	else if (action == "circle") {
		cout << "Please enter the radius: " << "\n";
		cin >> radius;
		Circle.getArea();
	}

}