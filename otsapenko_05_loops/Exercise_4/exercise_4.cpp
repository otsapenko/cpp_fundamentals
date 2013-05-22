#include<iostream>
#include<cmath>

using namespace std;

const int INIT_INV = 100;
const double PERC_1 = 0.1;
const double PERC_2 = 0.05;

int main()
{
	int year = 1;
	double inv_1 = 0.0;
	double inv_2 = 0.0;
	double simple_ints = INIT_INV * PERC_1;

	do
	{
		inv_1 = INIT_INV + (year * simple_ints);
		cout << "Daphne's value of investment for " << year << " year(s): " << inv_1 << endl;

		inv_2 = (pow((1 + PERC_2), year)) * INIT_INV;
		cout << "Cleo's value of investment for " << year << " year(s): " << inv_2 << endl;
		++year;
	}
	while (inv_1 > inv_2);

	cout << "Cleo's investment exceeds Daphne's investment for "  << --year << " years" << endl;
	cout << "Daphne's investment is " << inv_1 << endl;
	cout << "Cleo's investment is " << inv_2 << endl;

	cin.get();

	return 0;
}