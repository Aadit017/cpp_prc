#include <iostream>
using namespace std;
class Aadit{
    public:
        int roll;
        string name;
};
int main(){
    Aadit obj;
    obj.roll=1;
    obj.name="Aadit";
    string *name_obj=&obj.name;
    int *roll_number=&obj.roll;
    cout << *name_obj << endl;
    cout << *roll_number << endl;
    
}