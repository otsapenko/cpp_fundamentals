#include <iostream>

using namespace std;

int main()
{
	double celTemp;
	double farTemp; 
	cout << "Please enter a Celsius value: ";
	cin >> celTemp;
	farTemp = 1.8 * celTemp + 32.0;
	cout << celTemp << " degrees Celsius is " << farTemp << " degrees Fahrenheit.";
	cin.get();
	cin.get();

	return 0;
}