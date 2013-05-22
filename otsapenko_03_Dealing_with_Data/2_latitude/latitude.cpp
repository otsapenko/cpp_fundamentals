#include <iostream>
using namespace std;

const float sec_in_min = 60.0;
const float min_in_degree = 60.0;

int main()
{
	int degrees, minutes, seconds;
	double dec_degrees;
	
	cout << "Please enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;
	
	dec_degrees = (minutes * sec_in_min + seconds)/(sec_in_min * min_in_degree);
	
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << degrees + dec_degrees << " degrees";
	
	cin.get();
	cin.get();
	return 0;
}