/*
	Lesson 11. Pointers
	Example 4. Print characters using const qualifier
		const
*/
#include <cctype>
#include <iostream>

using std::cout;
using std::endl;

// Print text
// textPtr is nonconstant pointer to constant data; cannot modify character to which sPtr points
void printCharacters(const char *textPtr)
{
	// Loop untill end of text
	for( ; *textPtr != '\0'; textPtr++)		// Empty initialization
	{
		// Print character
		cout << *textPtr;
	}

	// Attempt to modify constant data --> Syntax error: Expression must be a modifiable lvalue
	//*textPtr = 'X';

	cout << endl;				// Print end of line
}

// Using the & and * operators with pointers
int main()
{
	char text[] = "Hello, goodbye.";
	printCharacters(text);		// Pass text as char*
}