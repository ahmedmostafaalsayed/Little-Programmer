#include <iostream>
using namespace std;

// Program entry point
int main()
{
	// Length and width of the rectangle
	float length;
	float width;
	
	cout << "Enter length: ";
	cin >> length;

	cout << "Enter width: ";
	cin >> width;

	cout << "Area: " << length * width << " cm square.";

	return 0;
}