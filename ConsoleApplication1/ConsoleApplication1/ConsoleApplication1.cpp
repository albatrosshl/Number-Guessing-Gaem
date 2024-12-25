#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    //start the game
    srand(time(0));

    // Generate a random number between 1 and 10
    int numberToGuess = rand() % 10 + 1;
    int userGuess = 0;
    int guessCount = 0;
    const int maxGuesses = 2;  // Limit number of guesses

    cout << "salam alajcom bratan" << endl;
    cout << "I have selected a number between 1 and 10." << endl;
    cout << "You have  " << maxGuesses << " tries to guess." << endl;

    //game loop
    while (guessCount < maxGuesses) {
        cout << "\n what number you guessing vro: ";
        cin >> userGuess;
        guessCount++;

        // guess is correct?
        if (userGuess == numberToGuess) {
            cout << "nice job vro" << guessCount << endl;
            break;  // Exit if the guess is correct
        }
        // Provide feedback on the guess
        else if (userGuess < numberToGuess) {
            cout << "try again." << endl;
        }
        else {
            cout << "try again." << endl;
        }

        // If no guesses right
        if (guessCount == maxGuesses) {
            cout << "\n nah bro u are not right, restart the game if ur not scared :3" << endl;
            cout << "\n the correct number was... *drumroll*" << numberToGuess << endl;
        }
    }

    return 0;
}

