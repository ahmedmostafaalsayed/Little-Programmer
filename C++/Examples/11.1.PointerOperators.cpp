/*
	Lesson 11. Pointers
	Example 1. Pointer operators
*/
#include <iostream>

using std::cout;
using std::endl;

// Using the & and * operators with pointers
int main()
{
	int a = 7;			// a is an integer
	int *aPtr = &a;		// Pointer to an integer, assigned the address of a
	
	cout << "The address of a is: " << &a << endl;
	cout << "The value of aPtr is: " << aPtr << endl;

	cout << "The value of a is: " << a << endl;
	cout << "The value of *aPtr is: " << *aPtr << endl;
	
	cout << "Showing that * and & are inverses of each other.." << endl;
	cout << "&*aPtr is: " << &*aPtr << endl;
	cout << "*&aPtr is: " << *&aPtr << endl;
}