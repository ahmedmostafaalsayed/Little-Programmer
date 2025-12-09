// Example 3: Concatenate two strings
// لصق الكلام
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char word1[] = "Ahmed";
	char word2[] = "Mostafa";
	int length1 = strlen(word1);
	int length2 = strlen(word2);
	// One extra character for a space and one for null terminator
	char result[length1+length2+2];

	// Copy first word
	for(int i = 0; i < length1; i++)
	{
		result[i] = word1[i];
	}
	result[length1] = ' ';
	// Copy second word
	for(int i = 0; i < length2; i++)
	{
		result[length1+1+i] = word2[i];
	}

	// Print the result
	cout << result << endl;
}