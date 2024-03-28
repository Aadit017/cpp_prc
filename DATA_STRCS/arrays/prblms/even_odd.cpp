/*
{1,2,4,5,3,23}
2 3 1 3 5 23
*/
// declare two vectors
// easy question , doing it for the sake of vectors
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // make the changes inside the orignal vector
    vector<int> arr = {1, 2, 4, 4, 53, 36, 3, 7, 11, 34, 675, 79};
    for (int i = 0; i < arr.size() - 1; i += 1)
    {
        for (int j = i + 1; j < arr.size(); j += 1)
        {
            if (arr[j] % 2 == 0)
            {
                swap(arr[j], arr[i]);
            }
        }
    }
    for (int i : arr)
    {
        cout << i << " ";
    }
}
// idk why geekforgeeks has written such a complex code , mines too easy