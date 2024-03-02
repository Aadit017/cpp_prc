//! lambda functions 
/*
list of variables from the surrounding scope for lambda function to use inside[]
[] (parameters) -> return type {
    function statements 
}
*/
#include <iostream>
using namespace std;
int main(){
    auto add =[](int x){
        cout << x+x << endl;
    };
    add(30);
}