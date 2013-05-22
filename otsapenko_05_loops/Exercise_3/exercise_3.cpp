#include<iostream>

using namespace std;

int main()
{
	int number = 0;
	int sum = 0;

	cout << "Please enter number: ";
	(cin >> number).get();

	while (number != 0)
	{
		sum += number;
		cout << "Sum of entered numbers is " << sum << endl;
		cout << "Please enter next number: ";
		(cin >> number).get();
	}

	cin.get();

	return 0;
}