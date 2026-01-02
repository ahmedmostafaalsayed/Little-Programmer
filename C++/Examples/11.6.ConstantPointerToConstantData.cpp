/*
	Lesson 11. Pointers
	Example 6. Constant pointer to constant data
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
	const int * const numberPtr = &number;

	// Not allowed: Cannot modify number since number not constant
	//*numberPtr = 10;

	// Not allowed: Cannot modify const pointer
	//numberPtr = &number;
}