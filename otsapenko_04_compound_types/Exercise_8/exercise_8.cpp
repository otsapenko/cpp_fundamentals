#include<iostream>
using namespace std;

struct pizza
{
	char CompanyName[20];
	int size;
	int weight;
};

int main()
{
	pizza *new_pizza = new pizza;
	cout << "Enter size of pizza: ";
	(cin >> new_pizza->size).get();
	cout << "Enter company name: ";
	cin.getline(new_pizza->CompanyName, 20);
	cout << "Enter weight of pizza: ";
	(cin >> new_pizza->weight).get();

	cout << "Company name: " << new_pizza->CompanyName << endl;
	cout << "Pizza size: "<< new_pizza->size << endl;
	cout << "Pizza weight: "<< new_pizza->weight;
	delete new_pizza;
	
	cin.get();
	return 0;
}