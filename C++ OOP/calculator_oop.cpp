/*Task 4: Create a simple calculator application in C++ that performs the following operations:
addition, subtraction, multiplication, and division. You will implement this calculator using
Object-Oriented Programming.*/


#include <iostream>
using namespace std;

class Calculator
{
public:
    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    double divide(double a, double b)
    {
        if (b != 0)
        {
            return a / b;
        }
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main()
{
    double num1, num2;
    char operation;

    Calculator calc;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    double result;
    switch (operation)
    {
    case '+':
        result = calc.add(num1, num2);
        break;
    case '-':
        result = calc.subtract(num1, num2);
        break;
    case '*':
        result = calc.multiply(num1, num2);
        break;
    case '/':
        result = calc.divide(num1, num2);
        break;
    default:
        cout << "Invalid operation!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
