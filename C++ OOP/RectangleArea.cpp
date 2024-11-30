// Task 1: Create a Rectangle Class
// ● Define private variables: length and width.
// ● Provide public setter and getter methods to access and update these variables.
// ● Write a method calculateArea() to return the area of the rectangle.
// ● Test the class by creating an object, setting values, and printing the area.


#include <iostream>
using namespace std;

// Rectangle class definition
class Rectangle {
private:
    // Private variables for length and width
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    // Setter method for length
    void setLength(double len) {
        if (len > 0) {
            length = len;
        } else {
            cout << "Length must be positive!" << endl;
        }
    }

    // Getter method for length
    double getLength() const {
        return length;
    }

    // Setter method for width
    void setWidth(double wid) {
        if (wid > 0) {
            width = wid;
        } else {
            cout << "Width must be positive!" << endl;
        }
    }

    // Getter method for width
    double getWidth() const {
        return width;
    }

    // Method to calculate the area of the rectangle
    double calculateArea() const {
        return length * width;
    }
};

int main() {
    // Create an object of the Rectangle class and initialize it with values
    Rectangle rect(10.5, 5.2);

    // Display the values of length and width
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;

    // Calculate and display the area of the rectangle
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
