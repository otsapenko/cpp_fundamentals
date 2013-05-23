#include<iostream>

using namespace std;

int Fill_array(double *, int size);
void Reverse_array(double *, int size);
void Show_array(const double *, int size);
void clear_stream();

const int MaxArrSize = 10;

void clear_stream()
{
	cin.clear();
	 while (std::cin.get() != '\n')
		continue;
}

int main()
{
	double arr[MaxArrSize] = {0};
	int currArrSize = 0;

	currArrSize = Fill_array(arr, MaxArrSize);
	if (currArrSize == 0)
	{
		cout << "No values where entered!";
		return 0;
	}
	
	Reverse_array(arr + 1, currArrSize - 2);
	Show_array(arr, currArrSize);

	system("PAUSE");

	return 0;
}

int Fill_array(double *arr, int size)
{
	int count = 1;
	cout << "Please enter double values (10 max, enter any of non numeric values to finish entering)" << endl;
	
	for (double *i = arr; i < arr + size; i++)
	{
		cout << "Value #" << count << ": "; 

		if(!(cin >> *i))
		{
			clear_stream();
			break;
		}
		count++;
	}
	return count - 1;
}

void Reverse_array(double *arr, int size)
{
	double temp;
	int i, j;
	
	for (i = 0, j = size - 1; i < j; i++, j--) 
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp; 
	}
}

void Show_array(const double *arr, int size)
{
	
	cout << endl << "Array values after Reverse" << endl;
	for (int i = 1; i <= size; i++)
	{
		cout << "Value #" << i << ": " << arr[i - 1] << endl;
	}
}