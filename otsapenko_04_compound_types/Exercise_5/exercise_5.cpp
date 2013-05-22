#include<iostream>
using namespace std;

struct CandyBar
{
	char name[20];
	float weight;
	int calories;
};

int main()
{
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	cout << "Candy Name: " << snack.name << endl;
	cout << "Candy Weight: " << snack.weight << endl;
	cout << "Calories: " << snack.calories;

	cin.get();
	return 0;
}