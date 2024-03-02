#include <iostream>
using namespace std;
/*
1. Create a function to print the sum of two numbers 
2. caf to return the product of two numbers 
3. Recursion to print palindrome 
4. factorial via recursion
!print in the function only
*/
float product_numbers(int a, int b){
    return a*b;
}
int sum_of_two_numbers(int a, int b){
    cout << product_numbers(a,b) << endl;
    cout << a+b << endl;
}
int palindrome(int a , int b){
    if(a>=30){
        return 0;
    }
    cout << a << " " ;
    palindrome(b,a+b);
}
int factorial(int a){
    if(a<=1){
        return 1;
    }
    return a*factorial(a-1);
    
}
int main(){
    sum_of_two_numbers(23,54);
    palindrome(1,1);
    cout << factorial(5) <<endl;
}