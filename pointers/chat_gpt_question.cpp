/*Here's a program question that requires you to pass pointers as arguments in C++:

**Question:**

Write a C++ program that defines a function called `swapValues` which takes two integer pointers as arguments and swaps the values they point to. In the `main()` function, declare two integer variables `num1` and `num2`, assign them initial values, and then call the `swapValues` function to swap their values. Finally, print the values of `num1` and `num2` after the swap.

Your program should have the following structure:

- The `swapValues` function should have the following signature:
  ```cpp
  void swapValues(int* ptr1, int* ptr2);
  ```
- The `main()` function should declare two integer variables `num1` and `num2`, assign them initial values, call the `swapValues` function passing the addresses of `num1` and `num2` as arguments, and then print the values of `num1` and `num2`.

Your program should demonstrate the functionality of passing pointers as arguments to modify values outside of the function.

**Expected Output:**

```
Before swapping:
num1 = 10
num2 = 20
After swapping:
num1 = 20
num2 = 10
```

This question assesses your understanding of passing pointers as arguments to functions and using them to modify values outside the function scope.*/

#include <iostream>
using namespace std;
void swapValues(int *p1, int *p2)
{
  cout << "Before Swapping :\n"
       << *p1 << " " << *p2 << endl;
  int a = *p1;
  *p1 = *p2;
  *p2 = a;
}
int main()
{
  int num1 = 12;
  int num2 = 21;
  swapValues(&num1, &num2);
  cout << "After Swapping :\n"
       << num1 << " " << num2 << endl;
  return 1;
}