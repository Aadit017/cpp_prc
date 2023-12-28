#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter the number now" << endl;
    cin >> number;
    int s=0;
    int n=number;
    while(number>0){
        int num=number%10;
        s=s*10 + num;
        number/=10;
    }
    cout << s;
    cout << (s==n?"yes":"no") << endl;
    return 0 ;
}