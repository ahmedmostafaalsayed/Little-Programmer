#include <iostream>

using namespace std;

int main()
{
	int grade;
	cout << "Enter your grade: ";
	cin >> grade;

	// Check if student passed the exam or not
	if( grade >= 90 )
	{
		cout << "Excellent" << endl;
	}
	else if( grade >= 75 )
	{
		cout << "Very good" << endl;
	}
	else if( grade >= 60 )
	{
		cout << "Good" << endl;
	}
	else if( grade >= 50 )
	{
		cout << "Satisfactory" << endl;
	}
	else
	{
		cout << "Sorry, you failed the exam." << endl;
	}
}