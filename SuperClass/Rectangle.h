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
		float area;
		area = height * width;
		cout << area;
	}


};
