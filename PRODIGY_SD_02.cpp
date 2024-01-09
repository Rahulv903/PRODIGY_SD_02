#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!" << endl;

    do {
        // Prompt the user to input their guess
        cout << "Enter your guess: ";
        cin >> userGuess;

        // Increment the attempts counter
        attempts++;

        // Provide feedback based on the user's guess
        if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }

    } while (userGuess != secretNumber);

    return 0;
}
