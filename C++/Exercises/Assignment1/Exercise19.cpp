// Program 5: While loop
#include <iostream>
using namespace std;

// 
int main()
{
	int numbers[30];

	// Read 30 numbers
	for(int i = 0; i < 30; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> numbers[i];
	}

	// 1- Odd numbers > 50:
	for(int i = 0; i < 30; i++)
	{
		if(numbers[i] % 2 != 0 && numbers[i] > 50)
		{
			cout << numbers[i] << " ";
		}
	}

	// 2. Total of odd numbers
	int total = 0;
	for(int i = 0; i < 30; i++)
	{
		if(numbers[i] % 2 != 0)		// If odd number
		{
			total += numbers[i];
		}
	}
	cout << "Total of odd numbers: " << total << endl;

	// 3. Average of odd numbers > 80
	total = 0;
	float count = 0;
	for(int i = 0; i < 30; i++)
	{
		if(numbers[i] % 2 != 0 && numbers[i] > 80)		// If odd number & > 80
		{
			total += numbers[i];
			count++;
		}
	}
	cout << "Average of odd numbers > 80: " << total/count << endl;
}