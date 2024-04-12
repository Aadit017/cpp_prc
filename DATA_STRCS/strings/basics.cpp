#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Enter string " << endl;
    string str;
    // cin >> str;
    getline(cin, str);
    // cin only takes input till the first whitespace
    // getline takes until enter pressed
    cout << "Length of the string is " << str.length() << endl;
    str.append(" Hello");
    cout << "String after append value" << str << endl;
    cout << "Substring from the string" << str.substr(0, 5) << endl;
    cout << "Lets check if the substr Hello is present in the string using the find function" << endl;
    auto pos = str.find("Hello");
    if (pos == string::npos)
    {
        cout << "String not found";
    }
    else
    {
        cout << "String found";
    }
    cout << "\n now we'll erase using the erase function " << endl;
    str.erase(2, 5); // from index (a,b) a , removes b characters to the end
    cout << str << endl;
}