#include<iostream>

using namespace std;

int main()
{
	int row_num = 0;
	char asterisk = '*';
	char dot = '.';
	
	cout << "Enter number of rows: ";
	(cin >> row_num).get();

	for (int row = 1; row <= row_num; row++)
	{
		for (int i = 0; i < row_num - row; i++)
			cout << dot;
		
		for (int i = 0; i < row; i++)
			cout << asterisk;
		
		cout<< endl;
	}
	
	cin.get();
	return 0;
}