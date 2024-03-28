//! this program is for iterating through a vector
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    cout << "Size of the Vector rn : " << vec.size() << endl;
    cout << "Enter -1 to stop the input " << endl;
    int input;
    while (true)
    {
        if (input == -1)
        {
            break;
        }
        else
        {
            vec.push_back(input);
        }
    }
    cout << "Input stopped : Complete Vector --> " << endl;
}