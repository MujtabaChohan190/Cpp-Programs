/*Task 1: Write the following code using Object-Oriented Programming.

#include <iostream>
using namespace std;
int factorial(int n) {
if (n == 0 || n == 1) {
return 1;
} else {
return n * factorial(n - 1);
}
}
int main() {
int number;
cout << "Enter a number: ";
cin >> number;
if (number < 0) {
cout << "Factorial is not defined for negative numbers." << endl;
} else {
cout << "Factorial of " << number << " is " << factorial(number) << endl;
}
return 0;
}*/




#include <iostream>
using namespace std;

class FactorialCalculator
{
public:
    int calculate(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        else
        {
            return n * calculate(n - 1);
        }
    }
};

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        FactorialCalculator fc;
        cout << "Factorial of " << number << " is " << fc.calculate(number) << endl;
    }

    return 0;
}
