/*
Philip Fernandez
Lab03 Question 02
9/1/16
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
	// Seed srand with time function so that 
	// random numbers will differ
	unsigned seed = time(0);
	srand(seed);

	// Define constants for minimum 
	// and maximum random numbers
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 100;

	// Define three random int score variables
	int score1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	int score2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	int score3 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	// Define double average variable and calculate average score
	double average = (score1 + score2 + score3) / 3.0;

	// Display scores and average score
	cout << "Score 1: " << score1 << "\n";
	cout << "Score 2: " << score2 << "\n";
	cout << "Score 3: " << score3 << "\n";
	// Use setprecision(2) and fixed to round two decimal places for average
	cout << "Average Score: " << setprecision(2) << fixed << average << "\n";
	
	return 0;
}