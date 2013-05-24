#include <iostream> 

const int Seasons = 4; 
const char *(Snames)[Seasons] = {"Spring", "Summer", "Fall", "Winter"}; 

struct my_struct
{
	double pa[Seasons];
};

void fill(my_struct *); 
void show(my_struct *); 


int main () 
{ 
	my_struct s_pa = {0};
	
	fill(&s_pa); 
	show(&s_pa);
	
	return 0; 
} 

void fill(my_struct *s_pa) 
{ 
	using namespace std; 
	for (int i = 0; i < Seasons; i++) 
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> s_pa->pa[i];
	} 
} 

void show(my_struct * s_pa) 
{ 
	using namespace std; 
	double total = 0.0; 
	cout << "\nEXPENSES\n";
	
	for (int i = 0; i < Seasons; i++) 
	{ 
		cout << Snames[i] << ": $" << s_pa->pa[i] << endl; 
		total += s_pa->pa[i]; 
	} 
	
	cout << "Total Expenses: $" << total << endl;
	system("PAUSE");
}