#include <iostream>
#include <string>



int main()
{
    int age = 100;

    if( age < 13)
    {
        std::cout << "you are old enough";
    }
    else if(age < 19)
    {
        std::cout << "you're getting old";
    }
    else
    {
        std::cout << "you are not old enough";
    }

    return 0;

}