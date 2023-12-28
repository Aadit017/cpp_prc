#include <iostream>
using namespace std;

int main(){
    int p;
    float r,t;
    cout << "Enter the principal" <<endl;
    cin >> p;
    cout << "rate now" <<endl;
    cin >> r;
    cout << "Time (years)" <<endl;
    cin >> t;
    long a=p*(1+r*t);
    cout <<  "The total amount: " << a ;
    return 0;
}