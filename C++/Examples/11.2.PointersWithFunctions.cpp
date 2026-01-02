/*
	Lesson 11. Pointers
	Example 2. Pointers with functions
		Reference arguments
		Pointer arguments
*/
#include <iostream>

using std::cout;
using std::endl;

// Square a number by value
int squareByValue(int number)
{
	return number * number;
}

// Square a number by reference
void squareByReference(int *number)
{
	*number = *number * *number;
}

// Using the & and * operators with pointers
int main()
{
	int number = 7;
	cout << "Original value of number is: " << number << endl;
	squareByValue(number);		// Pass number by value
	cout << "Number after squaring by value: " << number << endl;
	squareByReference(&number);	// Pass number by reference
	cout << "Number after squaring by reference: " << number << endl;
}