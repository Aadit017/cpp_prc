// moves all the 0s in an array to the end positiosn
#include <iostream>
#include <vector>
using namespace std;
// another easy method wld be to sort the array so that 0s are on the start
// and then just subtract (no of 0's) from the index of every non 0 value and
// add (no of non 0's) to the values of 0
void start()
{
    vector<int> v;
    int arr[] = {1, 2, 4, 0, 5, 0, 3, 0, 7};
    int no_of_0s = 0;
    for (int i : arr)
    {
        cout << i << " ";
        if (i == 0)
        {
            no_of_0s += 1;
        }
        else
        {
            v.push_back(i);
        }
    }
    if (no_of_0s > 0)
    {
        for (int i = 0; i < no_of_0s; i += 1)
        {
            v.push_back(0);
        }
    }
    cout << "\nprinting changed array" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
}
int main() { start(); }