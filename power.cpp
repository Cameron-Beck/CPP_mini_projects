#include <iostream>
#include <cmath>

double power(double, double);

int main(){

    double base, exponent;
    
    std::cout << "what is the base" << std::endl;
    std::cin >> base;
    std::cout << "what is the exponent" << std::endl;
    std::cin >> exponent;
    double MyPower = power(base, exponent);
    std::cout << "result:" << std::endl << MyPower;
    


    return 0;
}

double power(double base, double exponent){
    double result = 1;
    for(int i = 0; i < exponent; i++){

        result = result * base;
    }
    return result;
}