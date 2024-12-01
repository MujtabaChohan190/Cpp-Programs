#include <iostream>
using namespace std;

// Abstract Class (Base class)
class Shape {
public:
    // Pure virtual function for calculating area (abstract method)
    virtual double calculateArea() = 0;

    // Virtual function for displaying shape details
    virtual void display() {
        cout << "This is a shape." << endl;
    }
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize radius
    Circle(double r) : radius(r) {}

    // Override the pure virtual function to calculate area
    double calculateArea() override {
        return 3.14 * radius * radius;
    }

    // Override the display function
    void display() override {
        cout << "This is a Circle with radius: " << radius << endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override the pure virtual function to calculate area
    double calculateArea() override {
        return length * width;
    }

    // Override the display function
    void display() override {
        cout << "This is a Rectangle with length: " << length << " and width: " << width << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Shape* shape1 = new Circle(5.0);  // Circle with radius 5
    Shape* shape2 = new Rectangle(4.0, 6.0);  // Rectangle with length 4 and width 6

    // Calling display() function (polymorphism in action)
    shape1->display();
    cout << "Area: " << shape1->calculateArea() << endl;

    shape2->display();
    cout << "Area: " << shape2->calculateArea() << endl;

    // Cleaning up dynamic memory
    delete shape1;
    delete shape2;

    return 0;
}
