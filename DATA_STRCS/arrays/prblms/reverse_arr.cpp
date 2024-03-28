#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 3, 345, 645, 22, 56, 2};
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    int size_of_org = sizeof(arr) / sizeof(int);
    int arr2[size_of_org];
    for (int i = 0; i < size_of_org; i++)
    {
        arr2[size_of_org - i - 1] = arr[i];
    }
    for (int i : arr2)
    {
        cout << i << " ";
    }
}