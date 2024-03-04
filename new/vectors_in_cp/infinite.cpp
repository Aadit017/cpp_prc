#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<char> v;
    cout << "keep entering values as you wish,submit `yes` in the correct case to stop the input" << endl;
    char ch;
    int i = 0;
    do
    {
        i++;
        cout << i << "th value: " << endl;
        cin >> ch;
        v.push_back(ch);
        cin.ignore();
    } while (ch != 'y');
    cout << "\ninput has been stopped" << endl;
    // elements in the vector
    for (char e : v)
    {
        cout << e << endl;
    }
}
