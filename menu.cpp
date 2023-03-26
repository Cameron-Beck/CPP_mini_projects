#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

void play_game(){

    int random = rand() % 251;
    std::cout << "you are playing\n";
    std::cout << random << std::endl;
    std::cout << "Guess a number" << std::endl;
    while(true)
    {
        int guess;
        std::cin >> guess;
        if (guess == random)
        {
            std::cout << "You win" << std::endl;
            break;
        } else if (guess < random)
        {
            std::cout << "number to low" << std::endl;
        } else
        {
            std::cout << "number to high" << std::endl;
        }

    }
}

int main()
{   
    srand(time(NULL));
    int choice;    
    do{
        std::cout << "0.Quit" << std::endl << "1.Play game" << std::endl;
        std::cin >> choice;

        switch(choice)
        {
            case 0:
            std::cout << "You have selected quit" << std::endl ;
            return 0;

            case 1:
            play_game();
            break;
        }
    }
    while(choice != 0);


}