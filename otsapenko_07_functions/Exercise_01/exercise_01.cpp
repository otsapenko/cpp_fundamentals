#include<iostream>

using namespace std;

const int ArrSize = 2;
double harmonic(int *, int size);
void clear_stream();

void clear_stream()
{
	cin.clear();
	 while (std::cin.get() != '\n')
		continue;
}

int main()
{
	int num[ArrSize] = {0, 0};
	double result = 0;

	cout << "Please enter two numbers (enter 0 to exit)" << endl;

	for (int i = 0; i < ArrSize; i++)
	{
		cout << "Number #" << i << ": ";
		while(!(cin >> num[i]))
		{
			cout << "NUMBER! please: ";
			clear_stream();
		}
		
		if(num[i] == 0)
			return 0;
	}
	
	result = harmonic(num, ArrSize);
	
	cout << "Result is: " << result << endl;

	system("PAUSE");
	return 0;
}

double harmonic(int *arr, int size)
{
	return 2.0 * (*arr) * (*(arr + 1)) / ((*arr) + (*(arr + 1)));
}