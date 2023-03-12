#include <iostream>
#include <cmath>

int main(){

    double base, exponent, result;
    

    std::cout << "what is the base: " << std::endl;
    std::cin >> base;
    std::cout << "what is the exponent" << std::endl;
    std::cin >> exponent;
    result = pow(base, exponent);
    std::cout << result << std::endl;

    return 0;
}