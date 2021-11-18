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
		float area;
		area = (0.5) * height * base;
		cout << area;
	}
	


};