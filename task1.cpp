
// TASK 1

// NUMBER GUESSING GAME

// jai shree ram

/* statement-->"Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number."*/

#include <iostream>
using namespace std;
int main()
{
    int random = 418;
    int guess;
    cout << "guesse the random number--> ";
    cin >> guess;
    if (guess < random)
        cout << "too low! until the user guesses the correct number! try again";
    else if (guess > random)
        cout << "too high! until the user guesses the correct number! try again";
    else
        cout << "congratulation! guesse the correct number";
}