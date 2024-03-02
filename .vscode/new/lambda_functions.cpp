#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    auto square_thingy = [&sum](int a)
    {
        sum += (a * a);
    };

    for (int i : arr)
    {
        square_thingy(i);
    }

    cout << "The sum of the squares of the array: " << sum << endl;

    return 0;
}
/*
!problems
arr.length() is not a valid way to get the length of the array in C++. You should use sizeof(arr) / sizeof(arr[0]) to get the length of the array.

In the lambda function square_thingy, you're capturing sum by value. In order to modify sum within the lambda function, you should capture it by reference [&sum] instead of [sum].

You have misplaced your lambda functions within the code, which might cause compilation errors.
*/