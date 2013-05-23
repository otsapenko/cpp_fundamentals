#include<iostream>

using namespace std;
double fact(int);


int main()
{
	int number = 0;
	
	cout << "Please enter a positive integer: ";
	cin >> number;
	
	if (cin.fail() || number < 0)
		cout << "That is not a positive integer.\n";
	else
		cout << number << " factorial is: " << fact(number) << endl;
	
	system("PAUSE");
	return 0;
}

double fact(int num)
{
	int result;

	if(num <= 1) 
		return 1;

	result = num * fact(num - 1);
	
	return result;
}