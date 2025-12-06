// Exercise 7: Probabilities
#include <iostream>
using namespace std;

int main()
{
	int list[50];
	for(int i = 0; i < 50; i++)
	{
		cout << "Enter item " << i+1 << ": " << endl;
		cin >> list[i];
	}
	
	// Read number from the user
	cout << "Enter a number: ";
	int number;
	cin >> number;

	// Count number of occurrences of this number in the list:
	int times = 0;
	for(int i = 0; i < 5; i++)
	{
		if(list[i] == number)
		{
			times++;
		}
	}
	// Now calculate the probability of this number:
	cout << "Probability of " << number << " is " << times / 50.0 << endl;
}