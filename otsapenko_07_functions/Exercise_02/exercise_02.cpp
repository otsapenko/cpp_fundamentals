#include<iostream>

using namespace std;

int fill_arr(int *, int size);
int calc_aver(const int *, int size);
void show_results(const int *, int size, int aver);
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
	int arr[MaxArrSize] = {0};
	int currArrSize = 0;
	int averResult = 0;

	currArrSize = fill_arr(arr, MaxArrSize);
	if (currArrSize == 0)
	{
		cout << "No results where entered!";
		return 0;
	}
	
	averResult = calc_aver(arr, currArrSize);
	show_results(arr, currArrSize, averResult);

	system("PAUSE");

	return 0;
}

int fill_arr(int *arr, int size)
{
	int count = 1;
	cout << "Please enter play results (10 max, 'f' to finish entering)" << endl;
	
	for (int *i = arr; i < arr + size; i++)
	{
		cout << "Result #" << count << ": "; 

		while(!(cin >> *i))
		{
			cin.clear();
			
			if(cin.get() == 'f')
				return count - 1;
			
			else
			{
				cout << "NUMBER! please: ";
				clear_stream();
			}
		}
		count++;
	}
	return count - 1;
}

int calc_aver(const int *arr, int size)
{
	int aver_result = 0;
	int sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	
	aver_result = sum / 2;

	return aver_result;
}

void show_results(const int *arr, int size, int aver)
{
	
	cout << endl << "Results List" << endl;
	for (int i = 1; i <= size; i++)
	{
		cout << "Result #" << i << ": " << arr[i - 1] << endl;
	}
	cout << "Average result: " << aver << endl;
}