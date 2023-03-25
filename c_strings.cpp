#include <iostream>
#include <string>

int main()
{
    std::string greeting = "hello";
    std::string complete_greeting = greeting + " there";
    complete_greeting += "!";
    std::cout << complete_greeting << std::endl;
    std::cout << complete_greeting.length() << std::endl;
return 0;
}