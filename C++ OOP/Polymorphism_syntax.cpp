#include <iostream>

using namespace std;

class Calculator {
public:
    // Method to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Method to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Method to add two double numbers
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    // Calls the method with two integers
    cout << "Sum is: " << calc.add(3, 4) << endl;

    // Calls the method with three integers
    cout << "Sum is: " << calc.add(1, 2, 3) << endl;

    // Calls the method with two doubles
    cout << "Sum is: " << calc.add(2.5, 3.5) << endl;

    return 0;
}
