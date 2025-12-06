// Exercise 13: Convert decimal to binary numbers
#include <iostream>
using namespace std;

int main()
{
	short base = 2,		// Binary numbering system
		  number,		// The number entered by the user
		  remaining;	// Remaining of number
	cout << "Enter a decimal number: ";
	cin >> number;
	remaining = number;

	// Convert the number to binary:
	short output[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	short index = 0;	//رقم الخانة الحالية
	while(remaining > 0)
	{
		output[index] = remaining % base;
		remaining = (remaining - output[index]) / base;
		index++;
	}

	// Print the result
	cout << number << " in binary system is: ";
	for(int i = 7; i >= 0; i--)
	{
		cout << output[i] << " ";
	}
}