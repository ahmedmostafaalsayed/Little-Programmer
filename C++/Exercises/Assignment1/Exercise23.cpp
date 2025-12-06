/*
Exercise 23: Read 30 values from the user. Then ask the user about the following choices:
1. Display minimum value of the numbers.
2. Add the minimum value to all numbers, then display the numbers after modification.
3. Subtract the minimum value from all numbers, then display the numbers after modification.
*/
#include <iostream>
using namespace std;

int main()
{
	/*
		// Read 30 numbers
		int numbers[30];
		for(int i = 0; i < 30; i++)
		{
			cout << "Enter number " << i + 1 << ": ";
			cin >> numbers[i];
		}
	 */
	int numbers[] = {92, 47, 11, 63, 28, 75, 39, 84, 56, 21,
					 67, 14, 99, 33, 45, 70, 18, 52, 88, 6,
					 25, 61, 36, 73, 9, 81, 49, 12, 95, 42};

	// Ask the user to select an operation
	cout << "1. Display minimum value of the numbers." << endl;
	cout << "2. Add the minimum value to all numbers, then display the numbers after modification." << endl;
	cout << "3. Subtract the minimum value from all numbers, then display the numbers after modification." << endl;
	cout << "Select an operation (1/2/3): ";
	short operation;
	cin >> operation;

	// Perform the selected operation
	if (operation == 1)
	{
		// 1. Display minimum value of the numbers
		int minimum = numbers[0];
		for (int i = 1; i < 30; i++)
		{
			if (numbers[i] < minimum)
			{
				minimum = numbers[i];
			}
		}
		cout << "Minimum value: " << minimum << endl;
	}
	else if (operation == 2)
	{
		// 2. Add the minimum value to all numbers, then display the numbers after modification
		// Calculate minimum value of the numbers
		int minimum = numbers[0];
		for (int i = 1; i < 30; i++)
		{
			if (numbers[i] < minimum)
			{
				minimum = numbers[i];
			}
		}

		// Add the minimum value to all numbers, then display the numbers after modification
		for (int i = 0; i < 30; i++)
		{
			numbers[i] += minimum;
			cout << numbers[i] << " ";
		}
		cout << endl;
	}
	else if (operation == 3)
	{
		cout << "Subtract the minimum value from all numbers, then display the numbers after modification" << endl;

		// Calculate minimum value of the numbers
		int minimum = numbers[0];
		for (int i = 1; i < 30; i++)
		{
			if (numbers[i] < minimum)
			{
				minimum = numbers[i];
			}
		}

		// Subtract the minimum value from all numbers, then display the numbers after modification
		cout << "Subtract the minimum value from all numbers, then display the numbers after modification:" << endl;
		for (int i = 0; i < 30; i++)
		{
			numbers[i] -= minimum;
			cout << numbers[i] << " ";
		}
		cout << endl;
	}
}