#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> v;
    cout << "keep entering values as you wish,submit `yes`, in the correct case to stop the input" << endl;
    string ch;
    int i = 0;
    while (ch != "y")
    {
        i += 1;
        cout << "Please enter the " << i << "th input : " << endl;
        cin >> ch;
        if (ch == "Y" || ch == "y")
        {
            break;
        }
        else
        {
            v.push_back(ch);
        }
    }
    cout << "Input has stopped: Heres the complete vector : --> " << endl;
    for (string e : v)
    {
        cout << e << endl;
    }
}
