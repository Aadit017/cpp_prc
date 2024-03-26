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
    cout