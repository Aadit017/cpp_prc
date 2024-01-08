#include <iostream>
#include <iomanip>
#include <cmath>

//* std::fixed says that there will be a fixed number of decimal digits after the decimal point

int main(){
    std::cout << "with std fixed" << std::fixed << M_PI << std::endl;
    std::cout << "without std fixed " << M_PI << std::endl;
    std::cout << "precision fixed " << std::fixed << std::setprecision(2) << M_PI <<std::endl;
    return 0;
}