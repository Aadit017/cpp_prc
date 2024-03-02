/* void* pointer is a generic pointer that
point to objects of any data type. can store the reference
to any type of object wihtout knwoing the
specific typ eof hte object
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 34;
    float b = 34.5f;
    string hello = "This is my string";
    void *void_ptr; // void pointer - will store references of any data type
    // without knowing its data type
    void_ptr = &x;
    cout << "int value" << void_ptr << "\n"
         << x << endl;
    // [*((int*)void_ptr)] this to print the value and not the address
}
