// going thru with iterations in vectors in cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    // infinite input for vectors
    cout << "Enter -1 to stop , else keep entering " << endl;
    int input = 0;
    while (input != -1)
    {
        cout << "enter -> " << endl;
        cin >> input;
        v1.push_back(input);
    }
    v1.pop_back();
    cout << "vector so far - >" << endl;
    for (auto i = v1.begin(); i != v1.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << "\nin reverse now" << endl;
    for (auto i = v1.rbegin(); i != v1.rend(); i += 1)
    {
        cout << *i << " ";
    }
    // capacity functions now
    cout << "\nsize of the vector [number of elements]" << endl;
    cout << v1.size() << endl;
    cout << "Maximum number of elements the vector can hold " << v1.max_size() << endl;
    cout << "Storage associated to the vector depending upon the number of elements in it " << v1.capacity() << endl;
    // to resize and the shrink the elemnets to that size we have two functions
    cout << "vector empty ? " << (v1.empty() == true ? "true" : "false") << endl;
    // access of elements inside the vector
    cout << "The element at 4th pos using []" << endl;
    if (v1.size() > 3)
    {
        cout << v1[3] << endl;
    }
    else
    {
        cout << "doesnt exist" << endl;
    }
    cout << "Element at the 2nd pos using at " << endl;
    if (v1.size() > 1)
    {
        cout << v1.at(1) << endl;
    }
    else
    {
        cout << "doesnt exist either" << endl;
    }
    int first, last;
    first = v1.front();
    last = v1.back();
    cout << "first and last elements" << first << " " << last << endl;
}
