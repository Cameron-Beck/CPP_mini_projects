#include <string>
#include <iostream>

int main()
{
    int choice;
    do
    {
    std::cout << "0. Quit" << std::endl << "1. Play Game" << std::endl ;
    std::cin >> choice;
    }
    while(choice != 0);

        switch(choice)
        {
            case 0:
                std::cout << "Exited";
                return 0;
            case 1:
                std::cout << "Selected play";
                break;
        }

}