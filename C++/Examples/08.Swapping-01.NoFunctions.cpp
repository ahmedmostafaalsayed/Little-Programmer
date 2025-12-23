/*
	Lesson 8. Swapping
	Example 1. Swapping array elements without using functions
*/
#include <iostream>

using namespace std;

// Swap array elements without using functions
int main()
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int index1, index2;
	cout << "Enter two indices: ";
	cin >> index1 >> index2;

	// Decrement index1 and index2 by 1
	index1--;
	index2--;

	// Temporary store for index1
	int temp = array[index1];
	// Swap index1 and index2
	array[index1] = array[index2];
	array[index2] = temp;
	
	cout << "After swapping, here is the array: ";
	for (int i = 0; i < 10; i++)
		cout << array[i] << " ";
	cout << endl;
}