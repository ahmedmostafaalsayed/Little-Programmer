// Exercise 7: Read some text, split words by spaces,
// and measure maximimum and minimum word lengths
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	// The current word
	char word[100],
		// Characters of the longest word
		longestWord[100],
		// Characters of the shortest word
		shortestWord[100],
		// Option selected by the user
		option;
	
	// Number of words so far
	short wordCount = 0,
		// Length of the current word
		currentWordLength,
		// Word lengths أطوال الكلمات
		length[20],
		// طول أقصر كلمة حتى الآن
		// Minimum length of a word, start with a high minimum length
		minimumLength = 100,
		// Maximum word length so far طول أطول كلمة حتى الآن
		maximumLength = 0;

	cout << "Type a string: ";
	
	// Reads up to the first whitespace
	// Read till the end of the line
	while( cin >> word )
	{
		length[wordCount] = currentWordLength
						  = strlen(word);
		wordCount++;	// Increment word counter

		// If longer than maximum, update maxmimum
		if(currentWordLength > maximumLength)
		{
			maximumLength = currentWordLength;	// Update the maximum
			strcpy(longestWord,word);
		}

		// If shorter than minimum, update minimum
		if(currentWordLength < minimumLength)
		{
			minimumLength = currentWordLength;	// Update the minimum
			strcpy(shortestWord,word);
		}

		// Break when we reach end of the line
		if(cin.peek() == '\n')
		{
			break;
		}
	}

	while(true)
	{
		// Ask the user to choose an option
		cout << "(A)verage word length." << endl;
		cout << "Display (l)ongest word." << endl;
		cout << "Display (s)hortest word." << endl;
		cout << "(q)uit." << endl;
		cout << "Choose an option: ";
		cin >> option;

		// To be used in case calculating word length average
		int sum = 0;
		switch(tolower(option))
		{
			case 'a':	// Average word length متوسط طول الكلمة
				if(wordCount > 0)
				{
					// Calculate the word length average
					for(int i = 0; i < wordCount; i++)
					{
						sum += length[i];
					}
					cout << "Average word length = " << 1.0 * sum / wordCount << endl;
				}
				// If no words, don't divide by zero
				else
				{
					cout << "No words entered." << endl;
				}
				break;
			case 'l':	// Longest word
				cout << "Longest word: " << longestWord << endl;
				break;
			case 'q':	// Quit
				return 0;
			case 's':	// Shortest word
				cout << "Shortest word: " << shortestWord << endl;
				break;
			default:
				cout << "Invalid option." << endl;
				break;
		}
	}
}
