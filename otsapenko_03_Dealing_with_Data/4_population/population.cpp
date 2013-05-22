#include <iostream>
using namespace std;

const float perc = 100.0;


int main()
{
	long long world_population, us_population;
	
	cout << "Enter the world's population: ";
	cin >> world_population;
	cout << "Enter the population of the US: ";
	cin >> us_population;
	
	cout << "The population of the US is " << us_population * perc / world_population << "% of the world population." << endl;
	cout << "You can use the Internet to get more recent figures.";
	
	cin.get();
	cin.get();
	return 0;
}