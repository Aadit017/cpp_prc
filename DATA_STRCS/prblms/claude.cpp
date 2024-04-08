#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Function 1
const vector<int> aadit = {1, 2, 3, 4, 5};
void createAndAddElements()
{
    // Write a program to create a vector of integers and add some elements to it.
    vector<int> v1;
    for (int i = 0; i < 10; i += 1)
    {
        v1.push_back(i);
    }
}

// Function 2
void findSize()
{
    // Write a program to find the size of a given vector.
    vector<int> v;
    cout << v.size();
}

// Function 3
void accessAndModify()
{
    // Write a program to access and modify elements of a vector using the at() function.
    vector<int> v1;
    v1.assign(aadit.begin(), aadit.end());
    v1.at(2) = -1;
}

// Function 4
void sortVector()
{
    // Write a program to sort a vector of integers in ascending order using the sort() function.
    vector<int> v1;
    for (auto i = aadit.rbegin(); i != aadit.rend(); --i)
    {
        v1.push_back(*i);
    }
    sort(v1.begin(), v1.end());
}

// Function 5
void insertElement()
{
    vector<int> v1;
    v1.assign(aadit.begin(), aadit.end());
    v1.insert(v1.begin() + 1, -1);
    // Write a program to insert an element at a specific position in a vector.
}

// Function 6
void removeElement()
{
    vector<int> v1;
    v1.assign(aadit.begin(), aadit.end());
    v1.erase(v1.begin() + 1);
    // Write a program to remove an element from a vector at a given position.
}

// Function 7
void findSecondLargest()
{
    vector<int> v1;
    v1.assign(aadit.begin(), aadit.end());
    sort(v1.begin(), v1.end());
    cout << "second largest" << v1.at(v1.size() - 2);
    // Write a program to find the second-largest element in a vector of integers.
}

// Function 8
void removeDuplicates()
{
    vector<int> v1;
    v1.assign(aadit.begin(), aadit.end());
    for (auto i = v1.begin(); i != v1.end(); ++i)
    {
        auto it = find(v1.begin(), i, *i);
        if (it != i)
        {
            v1.erase(it);
            --i;
        }
    }
    // Write a program to remove duplicate elements from a vector.
}

// Function 9
void reverseVector()
{
    vector<int> v1;
    v1.assign(aadit.begin(), aadit.end());
    vector<int> v2;
    v2.assign(v1.rbegin(), v2.rend());
    // Write a program to reverse the order of elements in a vector.
}

// Function 10
void mergeSortedVectors()
{
    // Write a program to merge two sorted vectors into a third sorted vector.
    vector<int> v1;
    vector<int> v2;
    v1.assign(aadit.begin(), aadit.end());
    for (int i : v1)
    {
        v2.push_back(i + 1);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    v1.insert(v1.end(), v2.begin(), v2.end());
}

int main()
{
    return 0;
}