#include<iostream>

using namespace std;

struct CandyBar
{
	char * Name;
	double weight;
	int calories;
};

void fill_struct(CandyBar &, char *, double, int);
void show_struct(const CandyBar &);

int main()
{
	CandyBar candy;
	char * str = "Millennium Munch";
	double weight = 2.85;
	int calories = 350;

	fill_struct(candy, str, weight, calories);
	show_struct(candy);

	system("PAUSE");
	return 0;
}

void fill_struct(CandyBar &candy, char * str, double weight, int cal)
{
	candy.Name = str;
	candy.weight = weight;
	candy.calories = cal;
}

void show_struct(const CandyBar & candy)
{
	cout << "Name: " << candy.Name << endl;
	cout << "Weight: " << candy.weight << endl;
	cout << "Calories: " << candy.calories << endl;
}
