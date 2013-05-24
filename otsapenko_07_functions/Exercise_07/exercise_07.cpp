#include <iostream> 

const int Max = 5; 

double * fill_array(double begin[], double end[]); 
void show_array(const double begin[], const double end[]); 
void revalue(double r, double begin[], double end[]); 

int main () 
{ 
	using namespace std; 
	double properties[Max]; 
	
	double * current_end = fill_array(properties, properties + Max); 
	
	if (current_end == properties)
	{
		cout << "No value where entered!";
		return 0;
	}
	
	show_array(properties, current_end); 
	
	cout << "Enter revaluation factor: ";
	double factor; 
	while (!(cin >> factor))
	{ 
		cin.clear(); 
		while (cin.get() != '\n') 
			continue; 
		cout << "Bad input; Please enter a number: ";
	} 
		
	revalue(factor, properties, current_end); 
	
	show_array(properties, current_end);

	cout << "Done.\n"; 
	cin.get (); 
	cin.get (); 
	
	return 0; 
} 

double * fill_array(double begin[], double end[]) 
{ 
	using namespace std; 
	double temp; 
	int i = 1;
	
	for (begin; begin < end; begin++ ) 
	{ 
		cout << "Enter value #" << (i) << ": ";
		cin >> temp; 
		
		if (!cin) 
		{ 
			cin.clear(); 
			while (cin.get() != '\n') 
				continue; 
			cout << "Bad input; input process terminated.\n";
			break; 
		} 
		
		else if (temp < 0)
			break; 
		
		*begin = temp; 
		i++;
	} 

	return begin; 
} 

void show_array(const double begin[], const double end[]) 
{ 
	using namespace std; 
	int i = 1;
	
	for (begin; begin < end; begin++) 
	{ 
		cout << "Property #" << (i) << ": $"; 
		cout << *begin << endl; 
		i++;
	} 
} 

void revalue(double r, double begin[], double end []) 
{ 
	for (begin; begin < end; begin++ ) 
		*begin *= r; 
}