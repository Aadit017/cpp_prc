/*
Pointers are symbolic representation of addresses.
*/
#include <iostream>
using namespace std;
int main(){
    int var=29;
    cout << var <<endl;
    int *ptr=&var;
    cout << *ptr << endl;
    cout << &ptr <<endl;
    cout << ptr << endl;
}