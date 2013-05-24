#include <iostream> 

const int Seasons = 4; 
const char *(Snames)[Seasons] = {"Spring", "Summer", "Fall", "Winter"}; 

void fill(double *, int size); 
void show(const double *, int size); 

int main () 
{ 
	double pa[Seasons];
	
	fill(pa, Seasons); 
	show(pa, Seasons);
	
	return 0; 
} 

void fill(double * pa, int size) 
{ 
	using namespace std; 
	for (int i = 0; i < size; i++) 
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> *pa;
		pa++;
	} 
} 

void show(const double * da, int size) 
{ 
	using namespace std; 
	double total = 0.0; 
	cout << "\nEXPENSES\n";
	
	for (int i = 0; i < size; i++) 
	{ 
		cout << Snames[i] << ": $" << da[i] << endl; 
		total += da[i]; 
	} 
	
	cout << "Total Expenses: $" << total << endl;
	system("PAUSE");
}