// passing arguments in pointers in cpp
#include <iostream>
using namespace std;
void function_one(int n)
{
    cout << "Function One" << endl;
    cout << "address of the arg is - " << &n << endl;
    cout << "org value " << n << endl;
}
void function_two(int *n)
{
    cout << "Function Two" << endl;
    cout << "address of the arg is - " << &n << endl;
    cout << "org value " << *n << endl;
}
void function_three(int &n){
    cout << "Funtion Three" <<endl;
    cout << "address of the arg is - " << &n <<endl;
    cout << "org value " << n <<endl;
}
void start()
{
    int value = 10;
    // we'll be passing it through 3 functions
    function_one(value);
    function_two(&value);
    function_three(value);
}

int main() { start(); }