#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    cout << "Value of a: " << a << endl;
    int *p = &a;
    *p = 1;
    cout << " Value and Address of the pointer " << *p << " " << &p << endl;
    // double pointer being declared now
    int **p = &p;
    **p = 345;
    cout << " Value and Address of the pointer " << **p << " " << &p << endl;
}