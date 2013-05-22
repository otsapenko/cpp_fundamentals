#include<iostream>
#include<string>

using namespace std;

const int arr_size = 12;

int main()
{
	string months[arr_size] = {"January", "February", "March", "April", "May", "June", "Jully", "August", "September", "October", "November", "December"};
	int values[arr_size] = {0};
	int sum = 0;

	for (int i = 0; i < arr_size; i++)
	{
		cout << "Please enter amount of sold books in " << months[i] << ": ";
		(cin >> values[i]).get();
		sum += values[i];
	}
	
	cout << "Amount of sold books during the year: " << sum;
	cin.get();

	return 0;
}