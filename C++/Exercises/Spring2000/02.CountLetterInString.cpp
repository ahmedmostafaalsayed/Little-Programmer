/* Exercise 2:
Read a string from the user.
Then ask the user about the letter that needs to be counted.
Then display the count of this let;er.
*/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char text[100];		// The full text
	char letterToFind;	// The character to search for
	
	// Ask the user to enter text
	cout << "Type a string: ";
	// Read text into "word" variable
	cin.getline( text, 100 );

	// Store length of text
	short textLength = strlen(text);

	// Ask the user to enter the letter to search for
	cout << "Type a letter to find: ";
	// Read letter into letterToFind
	cin >> letterToFind;
	
	// Loop over characters of text to find letterToFind
	for(int index = 0; index < textLength; index++)
	{
		// Compare current character with the caracter we are searching for
		if(text[index] == letterToFind)
		{
			// Print user-friendly index of the character
			cout << "Letter '" << letterToFind << "' is found at index " << index + 1 << endl;
			return 0;	// End the program
		}
	}
	// If program reached this line, the letter was not found
	cout << "Letter '" << letterToFind << "' is not found." << endl;
}