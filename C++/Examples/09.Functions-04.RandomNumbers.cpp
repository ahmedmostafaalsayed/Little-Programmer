/*
	Lesson 9. Functions
	Example 4. Random Numbers
*/
#include <iostream>
#include <cmath>

using namespace std;

// Simulate rolling a dice for 6000 times. And count frequency of each face.
int main()
{
	// Frequency of each side
	int frequency[6] = { 0, 0, 0, 0, 0, 0 };
	// Random number between 1 and 6
	int face;
	// Initialize random seed
	unsigned int seed = time(0);
	srand(seed);

	// Roll the dice 6,000 times
	for(int roll = 0; roll < 6000; roll++)
	{
		// Generate a random number between 1 and 6
		face = rand() % 6;
		// Increase the frequency of this face
		frequency[face]++;
	}

	// Display the frequency of each side
	cout << "Frequency of each side:" << endl;
	for(int face = 0; face < 6; face++)
	{
		cout << face + 1 << ": " << frequency[face] << endl;
	}
}