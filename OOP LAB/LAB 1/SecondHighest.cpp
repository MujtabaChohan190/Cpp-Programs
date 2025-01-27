//1. Write a program that finds the second highest number in a float type array of 20
//elements using pointer.

#include <iostream>
using namespace std;
int main()
{
    float arr[20];
    float highest, secondHighest;
    float *ptr = arr;
    highest = -1e9;
    secondHighest = -1e9;

    // Input 20 values into the array
    for (int i = 0; i < 20; i++)
    {
        cout << "Enter value " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    for (int i = 0; i < 20; i++)
    {
        if (*(ptr + i) > highest)
        {
            secondHighest = highest;
            highest = *(ptr + i);
        }
        else if (*(ptr + i) > secondHighest && (*ptr + i) != highest)
        {
            secondHighest = *(ptr + i);
        }
    }
    cout << "The second highest number is:" << secondHighest << endl;
    return 0;
}
