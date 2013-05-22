# include<iostream>
# include<array>

using namespace std;

int main()
{
	array<int, 3> results;
	cout << "Enter first result: ";
	(cin >> results[0]).get();
	cout << "Enter second result: ";
	(cin >> results[1]).get();
	cout << "Enter third result: ";
	(cin >> results[2]).get();
	cout << endl;
	cout << "First result was: " << results[0] << endl;
	cout << "First result was: " << results[1] << endl;
	cout << "First result was: " << results[2] << endl;
	cout << "And avarage is: " << (results[0] + results[1] + results[2]) / 3;
	
	cin.get();
	
	return 0;
}