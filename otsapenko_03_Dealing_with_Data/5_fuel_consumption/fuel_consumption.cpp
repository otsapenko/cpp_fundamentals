#include <iostream>
using namespace std;

const float per_kms = 100.0;

int main()
{
	int liters, kms;
	float liters_per_km;
	
	cout << "Please enter a distance in kilometers: ";
	cin >> kms;
	cout << "Please enter how many liters of fuel where used: ";
	cin >> liters;
	
	liters_per_km = (liters * per_kms)/ kms;
	
	cout << "You car has gotten " << liters_per_km << " liters per " << int(per_kms) << " kilometers"; 
	
	cin.get();
	cin.get();
	return 0;
}