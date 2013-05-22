#include<iostream>
using namespace std;

int main()
{
	const int ArrSize = 20;
	char FirstName[ArrSize];
	char LastName[ArrSize];
	char Grade;
	int Age;

	cout << "What is your first name? ";
	cin.getline(FirstName, ArrSize);
	cout << "What is your last name? ";
	cin.getline(LastName, ArrSize);
	cout << "What letter grade do you deserve? ";
	cin >> Grade;
	Grade = Grade + 1;
	cout << "What is your age? ";
	(cin >> Age).get();

	cout << "Name: " << LastName << ", " << FirstName << endl;
	cout << "Grade: " << Grade << endl;
	cout << "Age: " << Age;

	cin.get();

	return 0;
}