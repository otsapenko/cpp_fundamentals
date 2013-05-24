#include<iostream>

using namespace std;

const int arrsize = 3;

typedef double (*pf)(double, double);

double calculate(double, double, pf);
double add(double, double);
double multiply(double, double);
double divide(double, double);

void clear_stream();

void clear_stream()
{
	cin.clear();
	 while (std::cin.get() != '\n')
		continue;
}

int main()
{
	
	pf pf_arr[arrsize] = {add, multiply, divide};

	double x, y;
	double result;

	cout << "Please enter two positive double values" << endl;
	cout << "X: ";
	while(!(cin >> x) || x < 0)
	{
		cout << "positive value please: ";
		clear_stream();
	}
	
	cout << "Y: ";
	while(!(cin >> y) || y < 0)
	{
		cout << "positive value please: ";
		clear_stream();
	}

	for(int i = 0; i < arrsize; i++)
	{
		result = calculate(x, y, pf_arr[i]);
		cout << "Result: " << result << endl << endl;
	}

	system("PAUSE");
	return 0;
}

double calculate(double x, double y, pf func)
{
	return func(x, y);
}

double add(double x, double y)
{
	cout << "add() function called" << endl;
	return x + y;
}

double multiply(double x, double y)
{
	cout << "multiply() function called" << endl;
	return x * y;
}

double divide(double x, double y)
{
	cout << "divide() function called" << endl;
	return x / y;
}