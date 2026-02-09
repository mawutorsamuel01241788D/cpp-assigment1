#include <iostream>

using namespace std;

int main(){
    const int secretTarget = 42 // The secret number to guess
    int guess = 0;              // user's guess
    int attempts = 0;           // number of tries

    cout << "welcome to the number guessing game!" << endl;
    while (guess != secretTarget) {
            // ask for user input
            cout << "enter your guess: ";
    cin >> guess;

    //increament the attempt counter
    attempts++;

    // provid hints
    if (guess > secretTarget){
            cout << "too high!" << endl;
    } else if (guess < secretTarget) {
        cout << "too low!" << endl;
    }
}

    // game ended - correct guess
    cout << "congratulation! you guessedn the number in " <<attempts << " attempts." << endl;


    return 0;
}
