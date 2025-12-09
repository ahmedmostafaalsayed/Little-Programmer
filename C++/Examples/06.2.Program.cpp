// Example 2: Character Arrays
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char word[] = "madam";
	int length = strlen(word);
	bool isPalindrome = true;

	for(int i = 0; i < length/2; i++)
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
		cout << word << " is NOT a palindrome." << endl;
	}
}