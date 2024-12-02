/*Task 5: Write a C++ program that detects if a number entered by the user is even or odd
using Object-Oriented Programming.*/

#include <iostream>
using namespace std;

class EvenOddChecker
{
public:
    string check(int n)
    {
        if (n % 2 == 0)
        {
            return "Even";
        }
        else
        {
            return "Odd";
        }
    }
};

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    EvenOddChecker checker;
    cout << "The number " << number << " is " << checker.check(number) << endl;

    return 0;
}
