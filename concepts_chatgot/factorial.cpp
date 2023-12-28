#include <iostream>
using namespace std;

int main(){
    int number ;
    int fac=1;
    cout << "Enter number for factorial " <<endl;
    cin >> number;
    for(int i=1;i<=number;i++){
        fac*=i;
    }
    cout<< "Factorial : " << fac ;
    return 0;
}