#include <iostream>
#include <cmath>
using namespace std;

const int inch_to_foot = 12;
const double inch_to_meter = 0.0254;
const double pound_to_kg = 2.2;

int main()
{
	int pounds;
	double feet, inches;
	double bmi;
	
	cout << "Please enter your height in feet and inches:" << endl;
	cout << "Feet first: ";
	cin >> feet;
	cout << "Inches: ";
	cin >> inches;

	cout << "Please enter your weight in pounds: ";
	cin >> pounds;

	inches = feet * inch_to_foot + inches;

	bmi = (pounds / pound_to_kg) / pow((inches * inch_to_meter), 2);
	
	cout << "Your BMI is " << bmi;
	
	cin.get();
	cin.get();
	return 0;
}