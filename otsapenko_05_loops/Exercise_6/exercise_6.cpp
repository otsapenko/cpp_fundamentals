#include<iostream>
#include<string>

using namespace std;

const int months_number = 12;
const int years_number = 3;

int main()
{
	string months[months_number] = {"January", "February", "March", "April", "May", "June", "Jully", "August", "September", "October", "November", "December"};
	int years[years_number][months_number];
	int years_sum[years_number] = {0};

	for (int year = 0; year < years_number; year++)
	{
		cout << " Year_"<< year << endl;

		for (int month = 0; month < months_number; month++)
		{
			cout << "Please enter amount of sold books in " << months[month] << ": ";
			(cin >> years[year][month]).get();
			years_sum[year] += years[year][month];
		}
		
		
		cout << "Amount of sold books during the Year_" << year << ": " << years_sum[year] << endl << endl;
	}
	
	cout << "Amount of sold books over three years: " << years_sum[0] + years_sum[1] + years_sum[2];
	

	cin.get();

	return 0;
}