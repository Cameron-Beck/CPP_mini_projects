#include <string>
#include <iostream>

int main()
{
    std::string greeting = "test.csv.csv";
    greeting.erase(greeting.length() -4 );
    std::cout << greeting << std::endl;


}