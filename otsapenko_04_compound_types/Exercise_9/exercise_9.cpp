#include<iostream>
#include<string>
using namespace std;

struct CandyBar
{
	string name;
	float weight;
	int calories;
};

int main()
{
	CandyBar *psnacks = new CandyBar[3];
	
	psnacks[0].name = "Mocha Munch";
	psnacks[0].weight = 2.3;
	psnacks[0].calories = 350;
	psnacks[1].name = "Mars";
	psnacks[1].weight = 50;
	psnacks[1].calories = 455;			
	psnacks[2].name = "Snikers";
	psnacks[2].weight = 55;
	psnacks[2].calories = 513;
		
	for (int i = 0; i < 3; i++)
	{
		cout << "Snack_" << i << endl;
		cout << "Candy Name: " << psnacks[i].name << endl;
		cout << "Candy Weight: " << psnacks[i].weight << endl;
		cout << "Calories: " << psnacks[i].calories << endl << endl;
	}
	
	delete [] psnacks;
	cin.get();
	
	return 0;
}