// Exercise 10: Search for a specific value in an array
#include <iostream>
using namespace std;

int main()
{
	int list[] = {47, 82, 44, 63, 29, 91, 56, 8, 44, 72};
	cout << "Enter a number: ";
	// Read number from the user
	int number;
	cin >> number;

	for(int i = 0; i < 9; i++)
	{
		if(list[i] == number)
		{
			cout << "Number found at index: " << i << endl;
		}
	}
}