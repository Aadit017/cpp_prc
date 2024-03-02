// access private using member class
#include <iostream>
using namespace std;
class second_aadit
{
private:
    int roll;
    string name;

public:
    void input()
    {
        cout << " Enter the Name :" << endl;
        cin >> name;
        cout << "Enter the rollnumber :" << endl;
        cin >> roll;
    }
    void output()
    {
        cout << "The values are as follows " << endl;
        cout << roll << name;
    }
};
int main()
{
    second_aadit a;
    a.input();
    a.output();
}