//! Declare public and use them in the main class
#include <iostream>
using namespace std;
class Aadit
{
public:
    int roll;
    string name;
    void temp_function()
    {
        cout << "this function is a member function" << endl;
    }
};
int main()
{
    Aadit a;
    a.roll = 12;
    a.name = "Bagga";
    cout << "Value of the variables: " << a.roll << "\t" << a.name << endl;
    a.temp_function();
}
