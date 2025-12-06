// Program 5: While loop
#include <iostream>
using namespace std;

int main()
{
	for(int number = 1; number <= 10; number++)
	{
		// Nested for loop
		for(int i = 1; i <= 10; i++)
		{
			cout << number << " * " << i << " = " << number * i << endl;
		}

		cout << endl;
	}
}