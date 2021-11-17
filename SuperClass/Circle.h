#pragma once
#include <string>
#include <iostream>
#include "Shape.h"
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

class Circle : public Shape {
public:
	int radius;

	void getArea() {
		int area = M_PI * (radius * radius);
		cout << "The area of the circle is " + area << "\n";
	}


};


