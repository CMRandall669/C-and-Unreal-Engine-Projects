#pragma once
#include <string>
#include <iostream>
#include "Shape.h"
using namespace std;

class Triangle : public Shape {
public:
	int height;
	int base;

	void getArea() {
		int triangleAreaCalc = .5;
		int area = triangleAreaCalc * height * base;
		cout << "The triangle's area is " + area << "\n";
	}


};