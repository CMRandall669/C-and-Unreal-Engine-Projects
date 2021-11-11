

#include <iostream>
#include "Dog.h"
using namespace std;

int main()
{

    Dog spencer;
    spencer.Breed = "Hound";
    spencer.Color = "Brown";
    spencer.Height = "2 feet";
    spencer.Weight = "60 pounds";

    string action;
    cout << "This dog's name is Spencer!!!!!!" << "\n";
    cout << spencer.Breed << " " << spencer.Color << "  " << spencer.Height << " " << spencer.Weight << "   " << "\n";
    cout << "Spencer can do some tricks. What should Spencer do? Type shake, sit, or lay: " << "\n";
    cin >> action;
    
    if (action == "shake") {
        spencer.Shake();
        cout << "Spencer is such a good boy!" << "\n";
    }

    else if (action == "sit") {
        spencer.Sit();
        cout << "Spencer is such a good boy!" << "\n";
    }

    else if (action == "lay") {
        spencer.layDown();
        cout << "Spencer is such a good boy!" << "\n";
    }
    
}

