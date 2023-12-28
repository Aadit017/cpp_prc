#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<< "Enter the value of the first and the second number \n";
    cin >> num1;
    cin >> num2;
    cout << "Number 1 : " << num1 << "\tNumber 2 : " << num2;
    // swapping being done now
    int num3=num2;
    num2=num1;
    num1=num3;
    cout << "\nNumber 1 : " << num1 << "\t1Number 2 : " << num2;
    return 0;
}