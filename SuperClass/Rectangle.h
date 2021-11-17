#pragma once
#include <string>
#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape {
public:
	int height;
	int width;

	void getArea() {
		int area = height * width;
		cout << "The rectangle's area is " + area << "\n";
	}


};
