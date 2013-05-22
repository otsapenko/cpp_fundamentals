#include <iostream>
using namespace std;

const int hrs_in_day = 24;
const int m_in_hr = 60;
const int sec_in_m = 60;

int main()
{
	long long seconds;
	int days, hours, minutes, sec;
	
	cout << "Enter a number of seconds: ";
	cin >> seconds;
	
	sec = seconds % sec_in_m;
	minutes = (seconds / sec_in_m) % m_in_hr;
	hours = (seconds / sec_in_m / m_in_hr) % hrs_in_day;
	days = seconds / sec_in_m / m_in_hr / hrs_in_day;
	
	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << sec << " seconds";
	
	cin.get();
	cin.get();
	return 0;
}