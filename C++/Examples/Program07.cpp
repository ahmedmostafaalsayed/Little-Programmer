// Program 5: While loop
#include <iostream>
using namespace std;

int main()
{
	int prices[5];
	cout << "Enter a new price: ";
	cin >> prices[5];

	// Writing to elements of an array:
	for(int i = 0; i < 5; i++)
	{
		cout << "Enter the price of item " << i + 1 << ": ";
		cin >> prices[i];
	}

	// Reading elements of an array:
	for(int i = 0; i < 5; i++)
	{
		cout << prices[i] << endl;
	}
}