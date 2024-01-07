#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandomNumber(int min, int max) {
	int n;
    n = rand() % (max - min + 1) + min;
    return n;
}

void guessNumber(int myNumber, int attempt) {
    int userGuess;

    cout << "Enter your guessing number: ";
    cin >> userGuess;

    if (userGuess == myNumber) {
        cout << "Congratulations! You guessed the correct number " <<myNumber << "." << endl;
    } else {
        cout << (userGuess < myNumber ? "Too low! " : "Too high! ");
        cout << "Attempts left: " << attempt - 1 << endl;

        
        if (attempt > 1) {
            guessNumber(myNumber, attempt - 1); 
        } else {
            cout << "Sorry, you've run out of attempts. The correct number was " << myNumber << "." << endl;
        }
    }
}

int main() {
    
   
    srand(time(NULL));

    
    int myNumber = generateRandomNumber(1, 100);

    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "Try to guess the number between 1 and 100." << endl;

    
    guessNumber(myNumber, 5);

    return 0;
}

