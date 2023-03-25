#include <stdio.h>
#include <iostream>
#include <string>

int main()
{
    std::string greeting;
    //std::cin >> greeting;
    //std::string left_over;
    //std::cin >> left_over;
    //std::cout << greeting << std::endl;
    //std::cout << left_over << std::endl;
    getline(std::cin, greeting);
    std::cout << greeting << std::endl;



}