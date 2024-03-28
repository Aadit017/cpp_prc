#include <iostream>
using namespace std;

class Object
{
public:
    Object()
    {
        cout << "Object created" << endl;
    }

    ~Object()
    {
        cout << "Object destroyed" << endl;
    }
};

int main()
{
    Object obj;

    return 0;
}
