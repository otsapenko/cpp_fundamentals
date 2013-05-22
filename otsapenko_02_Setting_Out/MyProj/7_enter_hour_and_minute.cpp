#include <iostream>

using namespace std;
void disp_time(int, int);

int main()
{
	int hour;
	int minute;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	disp_time(hour, minute);
	
	cin.get();
	cin.get();

	return 0;
}

void disp_time(int hour, int minute)
{
	cout << "Time: " <<  hour << ":" << minute;
}
