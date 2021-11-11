#pragma once
#include <string>
#include <iostream>
using namespace std;
class Dog
{
	public:
		string Breed;
		string Color;
		string Height;
		string Weight;

	public:
		void Shake() {
			cout << "The dog shakes!" << "\n";
		}
		void Sit() {
			cout << "The dog sits!" << "\n";
		}
		void layDown() {
			cout << "The dog laid down!" << "\n";
		}
};


