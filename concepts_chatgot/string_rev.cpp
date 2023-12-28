#include <iostream>
using namespace std;
int main(){
    string input;
    string rev="";
    cout << "Enter string" <<endl;
    cin >> input;
    for(int i=input.length()-1;i>=0;i--){
        char ch=input[i];
        rev+=ch;
    }
    cout << "Rev :" <<rev;
    return 0;
}