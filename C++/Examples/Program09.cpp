// Program 5: While loop
#include <iostream>
using namespace std;

// Find the average of array elements
int main()
{
	int numbers[] = {100, 200, 30, 14, 50};
	int total = 0;

	for(int i = 0; i < 5; i++)
	{
		total += numbers[i];
	}

	cout << "Average of array elements is: " << total / 5.0 << endl;
}