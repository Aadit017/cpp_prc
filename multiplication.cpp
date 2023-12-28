#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "enter number to take as the input";
    cin >> number;
    for (int i = 0; i < 10; i++){
        cout << "\n" << number*i;
    }
    return 0;
}
