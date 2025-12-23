/*
	Lesson 8. Swapping
	Example 2. Swapping array elements using functions and calling by reference
*/
#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

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

	// Swap array elements
	swap(array[index1], array[index2]);
	
	cout << "After swapping, here is the array: ";
	for (int i = 0; i < 10; i++)
		cout << array[i] << " ";
	cout << endl;
}
