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
	CandyBar snacks[3] = 
	{
		{"Mocha Munch", 2.3, 350},
		{"Mars", 50, 455},
		{"Snikers", 55, 513}
	};
	
	int i;
	for (i = 0; i < 3; i++)
	{
		cout << "Snack_" << i << endl;
		cout << "Candy Name: " << snacks[i].name << endl;
		cout << "Candy Weight: " << snacks[i].weight << endl;
		cout << "Calories: " << snacks[i].calories << endl << endl;
	}
	
	cin.get();
	return 0;
}