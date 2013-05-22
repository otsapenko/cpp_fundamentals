#include <iostream>
using namespace std;

const int inches_to_feet = 12;

int main()
{
	int inches;
	
	cout << "Please enter your height in inches: ";
	cin >> inches;
	
	cout << "Your height is " << inches / inches_to_feet << " feet and " << inches % inches_to_feet << " inches";
	
	cin.get();
	cin.get();
	return 0;
}