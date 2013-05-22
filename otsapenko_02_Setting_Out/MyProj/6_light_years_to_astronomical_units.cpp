#include <iostream>

using namespace std;

int main()
{
	double lightYears;
	double astrUnits; 
	cout << "Enter the number of light years: ";
	cin >> lightYears;
	astrUnits = lightYears * 63.240;
	cout << lightYears << " light years = " << astrUnits << " astronomical units.";
	cin.get();
	cin.get();

	return 0;
}