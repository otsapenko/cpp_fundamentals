#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	const int ArrSize = 30;
	char FirstName[ArrSize];
	char LastName[ArrSize];
	char InfoString[] = "Here's the information in a single string: ";

	cout << "Enter your first name: ";
	cin.getline(FirstName, ArrSize);
	cout << "Enter your last name: ";
	cin.getline(LastName, ArrSize);
	
	strcat(LastName, ", ");
	strncat(LastName, FirstName, ArrSize);
	
	char ResultString[sizeof(LastName) + sizeof(InfoString)];
	strcpy(ResultString, InfoString);
	strcat(ResultString, LastName);

	cout << ResultString;

	cin.get();
}