#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "This program will be used for learnign about modifiers , prev topics discussed in the last program" << endl;
    cout << "assign vector func" << endl;
    vector<int> v1;
    v1.assign(5, 10);
    // assigns the value 10 fives times;
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "assign for values from a prev vector/arr " << endl;
    // assign(arr,arr+size[how many values to take from the array arr])
    vector<int> v2 = {1, 2, 3, 4, 5, 6, 7};
    v1.assign(v2.begin(), v2.begin() + 3);
    // this is
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "to use assign with an array" << endl;
    int arr[] = {11, 22, 33, 44, 55};
    v1.assign(arr, arr + 4);
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < 5; i += 1)
    {
        v1.push_back(i * 12);
    }
    cout << "vector as of yet" << endl;
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "push back function in vector , removes from the back [thats what she said]" << endl;
    v1.pop_back();
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "size of the vector so far " << v1.size() << endl;
    // insert and emplace now -- >
    v1.insert(v1.begin() + 2, 3);
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << "\nSize of the vector " << v1.size() << endl;
    v1.emplace(v1.begin() + 2, 5);
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "\nSize of the vector " << v1.size() << endl;
    cout << "honestly i think swap and insert are the same exactly" << endl;
    // erase and emplace back also there
    v1.clear();
    cout << "Vector cleared with the clear function" << endl;
    for (int i : v1)
    {
        cout << i << " ";
    }
    cout << "\nSize of the vector " << v1.size() << endl;
}