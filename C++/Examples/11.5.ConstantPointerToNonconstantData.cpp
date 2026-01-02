/*
	Lesson 11. Pointers
	Example 5. Constant pointer to non-constant data
		const
*/
#include <cctype>
#include <iostream>

using std::cout;
using std::endl;

// Using the & and * operators with pointers
int main()
{
	int number = 5;
	// numberPtr is constant pointer to non-constant data.
	// Can only assign a value on initialization, and cannot modify pointer value later
	int * const numberPtr = &number;

	// Allowed: Can modify number since number is not constant
	*numberPtr = 10;

	// Not allowed: Cannot modify numberPtr
	//numberPtr = &number;
}