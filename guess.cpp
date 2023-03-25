#include <iostream>
#include <string>

int main(){

    std::string answer = "cameron";
    int age_answer = 29;
    int age_guess;
    std::string guess;

    std::cout << "Guess my name";
    std::cin >> guess;
    std::cout << "Guess my age";
    std::cin >> age_guess;

    if(guess == answer && age_guess == age_answer)
    {
        std::cout << "You got it right\n";
    }
    else if(guess == answer || age_guess == age_answer)
    {
        std::cout << "you got one right\n";
    }
    else
    {
        std::cout << "you got it wrong";
    }

    return 0;
}