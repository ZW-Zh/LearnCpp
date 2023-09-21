#include "8.xQ3/Random.h"
#include <atomic>
#include <iostream>

#include <limits> // for std::numeric_limits

void ignoreLine() {
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
int getGuess(int count) {
  while (true) {
    std::cout << "Guess #" << count << ": ";
    int guess{};
    std::cin >> guess;
    if (!std::cin) // has a previous extraction failed or overflowed?
    {
      if (std::cin.eof()) // if the stream was closed
      {
        exit(0); // shut down the program now
      }

      // yep, so let's handle the failure
      std::cin.clear(); // put us back in 'normal' operation mode
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                      '\n'); // and remove the bad input
      continue;              // try again
    }
    if (guess < 1 || guess > 100) {
      std::cout << "Your guess must be between 1 and 100.\n";
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }
    // ignore more characters
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return guess;
  }
}

bool playAgain() {
  while (true) {
    std::cout << "Would you like to play again (y/n)? ";
    char playAgain{};
    std::cin >> playAgain;

    switch (playAgain) {
    case 'y':
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      return true;
    case 'n':
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      return false;
    default:
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
}

int main() {
  constexpr int guesses{7}; // the user has this many guesses
  std::cout << "Let's play a game. I'm thinking of a number between 1 and 100. "
               "You have "
            << guesses << " tries to guess what it is.\n";
  int answer{0};
  int guess{0};
  int result = Random::get(1, 100);
  for (int i = 0; i < 7; ++i) {
    int guess{getGuess(i)};

    if (guess == result) {
      std::cout << "Correct! You win!\n";
      return 0;
    } else if (guess < result) {
      std::cout << "Your guess is too low.\n";
    } else {
      std::cout << "Your guess is too high.\n";
    }
  }
  std::cout << "Sorry, you lose. The correct number was " << result << ".\n";
  if (playAgain()) {
    main();
  } else {
    std::cout << "Thank you for playing.\n";
  }
}