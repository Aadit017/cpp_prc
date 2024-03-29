#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    for (int i = arr_size - 1; i >= 0; i--)
    {

        if (arr[i] > max)
        {
            max = arr[i];
            cout << max << " ";
        }
    }
}