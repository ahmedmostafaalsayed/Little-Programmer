/* Exercise 4:
Read a string from the user.
Find the position in the string which contains the substring.
*/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char text[100];			// The full text
	char subtext[100];		// The substring to search for
	
	// Ask the user to enter text
	cout << "Enter text: ";
	// Read text into "text" variable
	cin.getline( text, 100 );

	// Ask the user to enter the letter to search for
	cout << "Type subtext to find: ";
	// Read letter into letterToFind
	cin.getline( subtext, 100 );
	
	short textLen = strlen(text);		// Length of text
	short subtextLen = strlen(subtext);	// Length of subtext

	// Loop over characters of text to find subText
	for(int startPosition = 0; startPosition < textLen-subtextLen; startPosition++)
	{
		bool match = true;	// Match so far
		
		// Loop over characters of subText to compare with characters of text
		for(int subPosition = 0; subPosition < subtextLen; subPosition++)
		{
			// Compare current character with the caracter we are searching for
			if(text[startPosition + subPosition] != subtext[subPosition])
			{
				match = false;
				break;
				// Break out of the inner loop if a mismatch is found
				// and go to the next character in the text
			}
		}
		// If a complete match is found, terminate
		if(match)
		{
			// Print user-friendly startPosition of subtext
			cout << "Subtext '" << subtext << "' is found at index " << startPosition + 1 << endl;
			return 0;	// End the program
		}
	}

	// If program reached this line, the letter was not found
	cout << "Subtext '" << subtext << "' is NOT found." << endl;
}