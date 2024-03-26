#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int choice = 0;
    cin >> choice;
    if (choice == 1)
    {
        cout << a + b;
    }
    else if (choice == 2)
    {
        cout << a - b;
    }
    else if (choice == 3)
    {
        cout << a * b;
    }
    else if (choice == 4)
    {
        cout << a / b;
    }
    else
    {
        cout << "Invalid arg";
    }
    return 0;
}