#include <iostream>
using namespace std;

const double km_to_miles = 62.14;
const double liter_to_gallon = 3.875;

int main()
{
	float liter_per_km, gallon_per_mile;
	
	cout << "Enter a fuel consumption in liters per 100 kilometers: ";
	cin >> liter_per_km;
	
	gallon_per_mile = km_to_miles * liter_to_gallon / liter_per_km;
	
	cout << liter_per_km << " liters per 100 kilometers are " << gallon_per_mile << " miles per gallon.";
	
	cin.get();
	cin.get();
	return 0;
}