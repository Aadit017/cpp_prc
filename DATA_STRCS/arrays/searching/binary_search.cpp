//! binary search cmon bro do you even need to go thur this again
#include <iostream>
#include <algorithm>
using namespace std;
void start()
{
    int size;
    cout << "enter size" << endl;
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements now" << endl;
    for (int i = 0; i < size; i += 1)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    int to_search;
    cout << "Enter key to find" << endl;
    cin >> to_search;
    // binary search -- >
    int low = 0;
    int high = size - 1;
    bool cond = true;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] < to_search)
        {
            low = mid + 1;
        }
        if (arr[mid] > to_search)
        {
            high = mid - 1;
        }
        if (arr[mid] == to_search)
        {
            cout << "Element found at " << mid + 1 << "th pos. " << endl;
            cond = false;
            break;
        }
    }
    if (cond)
    {
        cout << "element not present in the array" << endl;
    }
    for (int i : arr)
    {
        cout << i << " ";
    }
}
int main()
{
    start();
}