#include <iostream>

using namespace std;

int main()
{
	int distance;
	cout << "Please input distance in furlongs: ";
	cin >> distance;
	distance = distance * 220;
	cout << "Distance in yards: " << distance;
	cin.get();
	cin.get();

	return 0;
}