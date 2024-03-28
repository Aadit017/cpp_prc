/*
jumping thru an array by m blocks , for this the array needs to be sorted
for this the array needs to be sorted
lets say u need to find 51
arr=[1,2,33,45,55,56,57,65]
the jump m here is 3
steps
indexes - 0-2[0,1,2] , 3-5[3,4,5] , 6-8[6,7]
1- 1,2,33
2- 45,55,56
3-57-65

since 56 is greater than 51 and 33 is less than 51
this means that the array will be in the 2nd list
we'll perform a linear search in the 2nd list
this is how jump search works
*/
#include <iostream>
#include <algorithm>
using namespace std;
void start()
{
    int size;
    int jump;
    cout << "Enter size" << endl;
    cin >> size;
    cout << "Enter jump size";
    cin >> jump;
    int arr[size];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < size; i += 1)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << "\nEnter element to find" << endl;
    int to_search;
    cin >> to_search;
    for (int i = 0; i < size; i += jump)
    {
        int start = i;
        int end = start + (jump - 1);
        if (arr[end] > to_search)
        {
            for (int j = start; j <= end; j += 1)
            {
                cout << j << " ";
            }
        }
    }
}
int main() { start(); }