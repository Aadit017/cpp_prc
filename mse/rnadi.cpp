#include <iostream>
using namespace std;
class A
{
public:
    int x;
};
class B : public A
{
public:
    int y;
};
int main()
{
    B b;
    b.x = 23;
    b.y = 1;
    cout << b.x << " " << b.y << endl;
}