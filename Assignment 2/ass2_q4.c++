#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "\nEnter number 1: ";
    cin >> num1;
    cout << "\nEnter number 2: ";
    cin >> num2;
    cout << "\nEnter number 3: ";
    cin >> num3;
    if (num1 < num2 && num1 < num3)
    {
        cout << num1 << " is the smallest number";
    }
    else if (num2 < num1 && num2 < num3)
    {
        cout << num2 << " is the smallest number";
    }

    else if (num3 < num2 && num3 < num1)
    {
        cout << num3 << " is the smallest number";
    }
    else
    {
        cout << "They are equal";
    }
}