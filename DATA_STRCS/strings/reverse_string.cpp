#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> splitstr;
void split_by_space(string &s);
int main()
{
    string sr;
    cout << "Enter a line " << endl;
    getline(cin, sr);
    split_by_space(sr);
    for (string str : splitstr)
    {
        for (int i = str.length() - 1; i >= 0; i--)
        {
            cout << str[i];
        }
        cout << " ";
    }
}

void split_by_space(string &s)
{
    int current_iterator = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            splitstr.push_back(s.substr(current_iterator, i - current_iterator));
            current_iterator = i + 1;
        }
    }
    if (current_iterator < s.length())
    {
        splitstr.push_back(s.substr(current_iterator));
    }
}