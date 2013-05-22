#include<iostream>
#include<string>

using namespace std;

int main()
{
	string FirstName;
	string LastName;
	string ResultString = "Here's the information in a single string: ";

	cout << "Enter your first name: ";
	getline(cin, FirstName);
	cout << "Enter your last name: ";
	getline(cin, LastName);

	ResultString += LastName + ", " + FirstName;
	cout << ResultString;

	cin.get();
}