/*A number is said to Bouncy number if the digits of the number are unsorted.

For example,
22344 - It is not a Bouncy number because the digits are sorted in ascending order.
774410 - It is not a Bouncy number because the digits are sorted in descending order.
155349 - It is a Bouncy number because the digits are unsorted.
A number below 100 can never be a Bouncy number.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int input;
    cout << "Enter number: ";
    cin >> input;
    vector<int> nums;
    while (input > 0)
    {
        nums.emplace(nums.begin(), input % 10);
        input /= 10;
    }
    vector<int> temp;
    temp.assign(nums.begin(), nums.end());
    bool cond = true;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i += 1)
    {
        if (nums[i] != temp[i])
        {
            cond = false;
        }
    }
    if (cond)
    {
        cout << " bouncy number";
    }
    else
    {
        cout << " not bouncy";
    }
}