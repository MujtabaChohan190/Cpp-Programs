#include <iostream>
using namespace std;

// Class definition
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor 1: Default constructor (no parameters)
    Rectangle() {
        length = 0.0;
        width = 0.0;
        cout << "Default Constructor Called: Length = " << length << ", Width = " << width << endl;
    }

    // Constructor 2: Parameterized constructor with one parameter (square)
    Rectangle(double side) {
        length = side;
        width = side;
        cout << "Parameterized Constructor Called (1 parameter): Length = " << length << ", Width = " << width << endl;
    }

    // Constructor 3: Parameterized constructor with two parameters
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
        cout << "Parameterized Constructor Called (2 parameters): Length = " << length << ", Width = " << width << endl;
    }

    // Function to display the area of the rectangle
    void displayArea() {
        cout << "Area of the rectangle: " << length * width << endl;
    }
};

int main() {
    // Creating objects using different constructors
    cout << "Creating Rectangle with Default Constructor:" << endl;
    Rectangle rect1;  // Calls the default constructor

    cout << "\nCreating Rectangle with One Parameter (Square):" << endl;
    Rectangle rect2(5.0);  // Calls the parameterized constructor with one parameter

    cout << "\nCreating Rectangle with Two Parameters:" << endl;
    Rectangle rect3(5.0, 10.0);  // Calls the parameterized constructor with two parameters

    // Displaying the area of each rectangle
    rect1.displayArea();
    rect2.displayArea();
    rect3.displayArea();

    return 0;
}
