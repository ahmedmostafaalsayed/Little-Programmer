/*
	Programming 1 Lab Final
	Exercise 1:
		a. Read an array of numbers with size 100 (X).
		b. Read another array of numbers with size 100 (Y).
		c. In (X), find 2 values equal to (1st & last cells).
		   Then find the total in the region between them.
		   (in the example, total = 19+76434+70+31 = 230)
		d. 
*/
#include <iostream>

using namespace std;

int main()
{
	// The arrays
	int x[] = {12, 4,13,21,7,33,36,18,14,6, 12, 19,76,34,70,31, 16, 14,23, 16},
		y[] = {27,14,35,110,120,15,27,16,200,30,11,60,41,12,93,55,1,30,36},
		temp;	// Used for swaping
	
	// Sizes of the arrays
	const short SIZE_X = sizeof(x) / sizeof(x[0]),
				SIZE_Y = sizeof(y) / sizeof(y[0]);
	
	// b. find 2 values equal to (1st & last cells)
	// Initial values of the indices of the twins
	int indexOfFirstTwin = 0,
		indexOfLastTwin = SIZE_X-1;
	for(int i = 1; i < SIZE_X; i++)
	{
		// If current value is the same as the first
		if(x[i] == x[0])
		{
			indexOfFirstTwin = i;
			break;
		}
	}

	// Find the last value that is equal to the last item in the array
	for(int i = SIZE_X-2; i > 1; i--)
	{
		// If current value is the same as the first
		if(x[i] == x[SIZE_X-1])
		{
			indexOfLastTwin = i;
			break;
		}
	}
	
	// Find the total of values between the two twins
	int total = 0;
	for(int i = indexOfFirstTwin + 1; i < indexOfLastTwin; i++)
	{
		total += x[i];
	}
	cout << "Total = " << total << endl;

	// In Y: swap any 2 adjacent cells their addition = total
	for(int i = 0; i < SIZE_Y-1; i++)
	{
		// Check if sum of current adjacent cells equals total
		if(y[i] + y[i+1] == total)
		{
			// Swap the cells
			temp = y[i];
			y[i] = y[i+1];
			y[i+1] = temp;

			// Advance i by 2
			i += 2;
		}
	}

	// Print Y
	cout << "Y array: ";
	for(int i = 0; i < SIZE_Y; i++)
	{
		cout << y[i] << " ";
	}
}
