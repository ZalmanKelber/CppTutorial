#include <iostream>
#include <ctime>
#include <math.h>

int main() {
    srand(time(NULL));
    const int outOf = 100;
    int secret = std::rand() % outOf;
    std::cout << "Enter a guess: ";
    int numGuesses = 0;
    while (true) {
        int guess;
        std::cin >> guess;
        numGuesses++;
        if (guess < secret) std::cout << "Too low.  Guess again: ";
        if (guess > secret) std::cout << "Too high.  Guess again: ";
        if (guess == secret) {
            int expected = ceil( log2 (outOf));
            std::cout << "Correct!  Solved in " << numGuesses << " guesses.  Expected "
            << expected << " guesses\n"; 
            break;
        }
    }
}