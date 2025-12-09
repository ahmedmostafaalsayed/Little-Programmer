/*
Example 3: Check check if a string is a palindrome.
تقرأ من البداية إلى النهاية كما تقرأ من النهاية إلى البداية
Example: madam
*/
#include <cstring>	// For strlen()
#include <iostream>	// For cout
using namespace std;

int main()
{
//	const char word[] = "Hello World";
//	const char word[] = "madam";
	const char word[] = "racecar";
	short length = strlen(word);
	bool isPalindrome = true;
	
	for(short i = 0; i < length/2; i++)
	{
		if(word[i] != word[length-i-1])
		{
			isPalindrome = false;
			break;
		}
	}

	if(isPalindrome)
	{
		cout << word << " is a palindrome." << endl;
	}
	else
	{
		cout << word << " is not a palindrome." << endl;
	}
}