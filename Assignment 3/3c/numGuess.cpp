#include <iostream>

using std::cout;
using std::cin;

int main()
{
	// Declare variables
	int numToGuess, correct, guess, count;
	
	// Initialize variables
	numToGuess = correct = guess = 0;
	count = 1; // The user will have guessed once before entering the loop	

	// Prompt the user to enter a number to guess
	// and store it in numToGuess.
	cout << "Enter the number for the player to guess.\n";	
	cin >> numToGuess;

	// Prompt user to enter guess before the loop starts
	// and store it in guess.
	cout << "Enter your guess.\n";
	cin >> guess;
	
	//
	while (guess != numToGuess)
	{
		// Check whether the guess was too high or too low
		// and display the appropriate response for the guess.
		if (guess > numToGuess)
			cout << "Too high - try again.\n";
		else if (guess < numToGuess)
			cout << "Too low - try again.\n";
	
		// Store the user's guess	
		cin >> guess;
	
		// Increment the counter keeping track of # of guesses
		count++;

	} //while	
	
	// Tell the user they guessed correctly and in how many tries
	cout << "You guessed it in " << count << " tries.\n";

	return 0;
}
