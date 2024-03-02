// //! this page will contain code related to functions in general and not just the lambda functions
// #include <bits/stdc++.h>
// using namespace std;
// int funcsomething(int a){
//     return a+a;
// }
// int main(){
//     int a=funcsomething(23);
//     cout << "from the function " << a <<endl;
//     return 0;
// }

//! lambda functions in cpp are basically small snippets of containing codes
//* for_each function
#include <bits/stdc++.h>
int printfnc(int x)
{
    std::cout << x << std::endl;
}
int main()
{
    std::vector<int> myvector = {1, 2, 4, 5};
    /* std::for_each(myvector.begin(),myvector.end(),printfnc);
    this above written line is the normal way of writing a program
    the lambda expression for the same would be ==>
    */
    std::for_each(myvector.begin(), myvector.end(), [](int x){
            
    });
}