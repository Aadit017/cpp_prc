#include <iostream>

int main(){
    int a;
    std::cout<<"Enter the value of the variable you want to check if its even or odd" << std::endl;
    std::cin >> a;
    if(a%2==0){
        std::cout << "even number";
    }else{
        std::cout<<"odd number";
    }
}