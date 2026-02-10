#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    // Initialize random seed
    srand(time(0));
    
    // Generate random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    
    std::cout << "🎯 Welcome to the Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100." << std::endl;
    
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;
        
        if(guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if(guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "🎉 Congratulations! You guessed it in " 
                      << attempts << " attempts!" << std::endl;
        }
    } while(guess != secretNumber);
    
    return 0;
}