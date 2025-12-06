// Exercise 2: Standard Deviation
#include <iostream>
using namespace std;

int main()
{
	float n = 50.0;		// Number of items

	// Items of first array
	int numbers1[] = {37, 82, 15, 64, 29, 91, 53, 8, 46, 72,
					19, 88, 5, 33, 60, 41, 76, 24, 97, 12,
					68, 44, 31, 56, 85, 21, 70, 95, 14, 63,
					27, 49, 92, 36, 18, 80, 54, 7, 99, 25,
					40, 73, 11, 66, 34, 59, 86, 22, 78, 3 };
	int numbers2[] = {47, 83, 12, 65, 39, 91, 56, 8, 44, 72,
					19, 88, 5, 33, 60, 41, 76, 24, 97, 13,
					68, 46, 31, 57, 85, 21, 70, 95, 14, 63,
					27, 49, 92, 36, 18, 80, 54, 7, 99, 25,
					40, 73, 11, 66, 34, 59, 86, 22, 78, 3};
	int numbers3[] = {92, 47, 11, 63, 28, 75, 39, 84, 56, 21,
					67, 14, 99, 33, 45, 70, 18, 52, 88, 6,
					25, 61, 36, 73, 9, 81, 49, 12, 95, 42,
					58, 27, 90, 31, 77, 5, 68, 23, 54, 86,
					16, 34, 71, 8, 60, 19, 97, 40, 82, 3};
	int numbers4[] = {94, 27, 63, 12, 88, 45, 76, 31, 59, 7,
					83, 20, 68, 39, 97, 14, 52, 36, 71, 5,
					90, 25, 48, 11, 66, 42, 81, 18, 73, 3,
					99, 34, 57, 9, 85, 22, 61, 16, 78, 28,
					50, 13, 70, 41, 92, 19, 64, 33, 80, 6};
	int numbers5[] = {87, 42, 19, 63, 5, 74, 28, 91, 36, 12,
					58, 80, 23, 49, 95, 7, 66, 31, 99, 14,
					53, 27, 71, 9, 84, 46, 18, 60, 33, 92,
					25, 68, 11, 77, 39, 2, 55, 21, 82, 48,
					16, 64, 35, 98, 8, 50, 29, 73, 41, 96};

	int standardDeviations[5];		// Standard deviations of all arrays

	// Array 1
	// Calculate array average:
	int total = 0;
	for(int i = 0; i < n; i++)
	{
		total += numbers1[i];
	}
	float average = total / n;

	// Calculate standard deviation:
	total = 0;
	for(int i = 0; i < 50; i++)
	{
		total += (numbers1[i] - average) * (numbers1[i] - average);
	}
	standardDeviations[0] = total / n;
	
	// Array 2
	// Calculate array average:
	total = 0;
	for(int i = 0; i < n; i++)
	{
		total += numbers2[i];
	}
	average = total / n;
	// Calculate standard deviation:
	total = 0;
	for(int i = 0; i < 50; i++)
	{
		total += (numbers2[i] - average) * (numbers2[i] - average);
	}
	standardDeviations[1] = total / n;
	
	// Array 3
	// Calculate array average:
	total = 0;
	for(int i = 0; i < n; i++)
	{
		total += numbers3[i];
	}
	average = total / n;
	// Calculate standard deviation:
	total = 0;
	for(int i = 0; i < 50; i++)
	{
		total += (numbers3[i] - average) * (numbers3[i] - average);
	}
	standardDeviations[2] = total / n;

	// Array 4
	// Calculate array average:
	total = 0;
	for(int i = 0; i < n; i++)
	{
		total += numbers4[i];
	}
	average = total / n;
	// Calculate standard deviation:
	total = 0;
	for(int i = 0; i < 50; i++)
	{
		total += (numbers4[i] - average) * (numbers4[i] - average);
	}
	standardDeviations[3] = total / n;

	// Array 5
	// Calculate array average:
	total = 0;
	for(int i = 0; i < n; i++)
	{
		total += numbers5[i];
	}
	average = total / n;
	// Calculate standard deviation:
	total = 0;
	for(int i = 0; i < 50; i++)
	{
		total += (numbers5[i] - average) * (numbers5[i] - average);
	}
	standardDeviations[4] = total / n;

	// Print all standard deviations:
	for(int i = 0; i < 5; i++)
	{
		cout << "Standard deviation " << i+1 << ": " << standardDeviations[i] << endl;
	}

	// Find the minimum standard deviation:
	int minimum = standardDeviations[0];
	for(int i = 1; i < 5; i++)
	{
		if(standardDeviations[i] < minimum)
		{
			minimum = standardDeviations[i];
		}
	}
	cout << "Minimum standard deviation is: " << minimum << endl;

	return 0;	// Program completed without problems (optional)
}