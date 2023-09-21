#include <iostream>
#include "Random.h"

int main()
{
    std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. You have 7 tries to guess what it is.\n";
    int answer{0};
    int guess{0};
    int result = Random::get(1,100);
    for (int i = 0; i < 7; ++i)
    {
        std::cout << "Guess #" << i + 1 << ": ";
        std::cin >> guess;
        if (guess == result)
        {
            std::cout << "Correct! You win!\n";
            return 0;
        }
        else if (guess < result)
        {
            std::cout << "Your guess is too low.\n";
        }
        else
        {
            std::cout << "Your guess is too high.\n";
        }
    }
    std::cout << "Sorry, you lose. The correct number was " << result << ".\n";
    std::cout << "Would you like to play again (y/n)? ";
    char playAgain{};
    std::cin >> playAgain;
    if(playAgain == 'y')
    {
        main();
    }else if(playAgain == 'n'){
        std::cout << "Thank you for playing.\n";
    }
}