#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Please enter the size of the array" << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int search_input;
    cout << "Enter number to be searched" << endl;
    cin >> search_input;
    bool cond = true;
    for (int i : arr)
    {
        if (i == search_input)
        {
            cout << "Number found ";
            cond = false;
        }
    }
    if (cond)
    {
        cout << "Number not found ";
    }
}