#include<iostream>
#include<array>

using namespace std;

const int MaxArrSize = 10;
void clear_input_quui();

int main()
{
	array<double, MaxArrSize> donations = {0};
	double sum = 0.0;
	double average = 0.0;
	int actual_size = 0;
	int greater_number = 0;

	for(actual_size; actual_size < MaxArrSize; actual_size++)
	{
		cout << "Please enter value #" << actual_size << ": ";
		if (cin >> donations[actual_size])
			sum += donations[actual_size];
		else
		{
			cin.clear();
			break;
		}
	}
	
	average = sum / actual_size;
	
	for (int i = 0; i < actual_size; i++)
	{
		if (donations[i] > average)
			++greater_number;
	}
	
	cout << "Avarage value is: " << average << endl;
	cout << "There are " << greater_number << " numbers greater then avarage value" << endl;
	
	system("PAUSE");
	
	return 0;
}
