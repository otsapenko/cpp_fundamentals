#include<iostream>

using namespace std;

int main()
{
	int first_number = 0;
	int second_number = 0;
	int sum = 0;

	cout << "Please enter first number: ";
	(cin >> first_number).get();

	cout << "Please enter second number: ";
	(cin >> second_number).get();

	for(int i = first_number; i <= second_number; i++)
	{
		sum += i;
	}
	
	cout << "Sum of all numbers in range from " << first_number << " to " << second_number << " is " << sum;
	cin.get();

	return 0;
}