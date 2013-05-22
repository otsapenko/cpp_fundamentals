#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Enter your age: ";
	cin >> age;
	age = age * 12;
	cout << "Your age in months is " << age;
	cin.get();
	cin.get();

	return 0;
}