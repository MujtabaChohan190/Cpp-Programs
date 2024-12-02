/*Task 2: Write the following code using Object-Oriented Programming.
#include <iostream>
using namespace std;
int findLargest(int a, int b, int c) {
if (a >= b && a >= c) {
return a; // a is the largest
} else if (b >= a && b >= c) {
return b; // b is the largest
} else {
return c; // c is the largest
}
}
int main() {
int num1, num2, num3;
cout << "Enter three numbers: ";

cin >> num1 >> num2 >> num3;
int largest = findLargest(num1, num2, num3);
cout << "The largest number is: " << largest << endl;
return 0;
}*/

#include <iostream>
using namespace std;

class LargestFinder
{
public:
    int findLargest(int a, int b, int c)
    {
        if (a >= b && a >= c)
        {
            return a; // a is the largest
        }
        else if (b >= a && b >= c)
        {
            return b; // b is the largest
        }
        else
        {
            return c; // c is the largest
        }
    }
};

int main()
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    LargestFinder lf;
    int largest = lf.findLargest(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;

    return 0;
}
