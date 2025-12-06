// Program 4: Odd or even?
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;
	cout << "Enter C: ";
	cin >> c;

	if(a>b)
	{
		if(a>c)
		{
			cout << a << " is the largest number." << endl;
		}
		else
		{
			cout << c << " is the largest number." << endl;
		}
	}
	else
	{
		if(b>c)
		{
			cout << b << " is the largest number." << endl;
		}
		else
		{
			cout << c << " is the largest number." << endl;
		}
	}
}