/*
	Lesson 9. Functions
	Example 5. Passing parameters by reference
*/
#include <iostream>

using namespace std;

// Increment x by reference: x is NOT affected
void incrementByValue(int x)
{
	x++;
}

// Increment x by reference: x is affected
void incrementByReference(int& x)
{
	x++;
}

// Simulate rolling a dice for 6000 times. And count frequency of each face.
int main()
{
	int x = 10;
	cout << "x: " << x << endl;
	incrementByValue(x);
	cout << "After increment by value, x: " << x << endl;
	incrementByReference(x);
	cout << "After increment by reference, x: " << x << endl;
}