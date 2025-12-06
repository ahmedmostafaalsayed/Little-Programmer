// Exercise 27: Gross and Net Salaries
#include <iostream>
using namespace std;

int main()
{
	int gross[30];
	float net[30];

	// Read gross salaries
	for(int i = 0; i < 30; i++)
	{
		cout << "Enter gross salary " << i + 1 << ": ";
		cin >> gross[i];
	}

	// 1. Display net salaries
	for(int i = 0; i < 30; i++)
	{
		if(gross[i] > 1000)
			net[i] = gross[i] * 0.8;
		else if(gross[i] > 500)
			net[i] = gross[i] * 0.9;
		else if(gross[i] > 200)
			net[i] = gross[i] * 0.95;
		else
			net[i] = gross[i];

		cout << "Net salary " << i + 1 << ": " << net[i] << endl;
	}

	// 2. Display the minimum salary
	float minimum = net[0];
	for(int i = 1; i < 30; i++)
	{
		if(net[i] < minimum)
			minimum = net[i];
	}
	cout << "Minimum salary: " << minimum << endl;

	// 3. Add 100$ to salaries greater than the minimum salary by 30$,
	//	  and display salaries after modification
	float minimum_accepted = minimum + 30;
	for(int i = 0; i < 30; i++)
	{
		if(net[i] < minimum_accepted)
			net[i] += 100;
	}
	for(int i = 0; i < 30; i++)
	{
		cout << "New net salary " << i + 1 << ": " << net[i] << endl;
	}
}