#include<iostream>
#include<string>

using namespace std;

int main()
{
	struct car
	{
		string manufacturer;
		int year;
	};

	int cars_number = 0;

	cout << "How many cars do you wish to catalog? ";
	(cin >> cars_number).get();

	car *my_cars = new car[cars_number];

	for (int car = 0; car < cars_number; car++)
	{
		cout << "Car #" << car << ": " << endl;
		cout << "Please enter the make: ";
		getline(cin, my_cars[car].manufacturer);
		cout << "Please enter the year made: ";
		(cin >> my_cars[car].year).get();
	}

	cout << "Here is your collection:" << endl;

	for (int car = 0; car < cars_number; car++)
		cout << my_cars[car].year << " " << my_cars[car].manufacturer << endl;

	delete [] my_cars;
	cin.get();

	return 0;
}
