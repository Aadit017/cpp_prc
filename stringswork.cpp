#include <iostream>
#include <string>

using namespace std;
int main(){
    string str1="Hello";
    string str2("World!");
    string str3=str1+str2;
    //! concatenation
    cout << str3 << " <-concatenation here" << endl;
    // string length
    cout << "str length :" << str3.length() << "length function " << endl;
    char somevalue=str3[0];
    cout << somevalue;
    str3+="CPP";
    cout << "\n" <<str3;
    return 0;
    // string part = str1.substr(7, 3); // Extracts a substring starting from index 7 of length 3

}