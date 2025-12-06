// Program 5: While loop
#include <iostream>
using namespace std;

// Reversing elements of an array
int main()
{
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for(int i = 9; i >= 0; i--)
	{
		cout << numbers[i] << " ";
	}
}