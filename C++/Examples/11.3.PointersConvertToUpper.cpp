/*
	Lesson 11. Pointers
	Example 3. Convert to upper case and using const qualifier
		const
		toUpper
*/
#include <cctype>
#include <iostream>

using std::cout;
using std::endl;

// Convert text to upper case
void printCharacters(char * textPtr)
{
	// While pointer didn't reach end of text
	while( *textPtr != '\0' )
	{
		// If current character is lower case
		if(islower(*textPtr))
		{
			// Convert character to upper case
			*textPtr = toupper(*textPtr);
		}

		// Advance pointer to next characters
		textPtr++;
	}
}

// Using the & and * operators with pointers
int main()
{
	char text[] = "characters and $32.98";
	cout << "Text before conversion is: " << text << endl;
	printCharacters(text);		// Pass text as char*
	cout << "Text after conversion is: " << text << endl;
}