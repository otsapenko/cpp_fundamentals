#include <iostream> 
template <typename T> // шаблон А 
T ShowArray(T arr[], int n); 

template <typename T> // шаблон В 
T ShowArray(T * arr[], int n); 

struct debts 
{ 
	char name[50]; 
	double amount; 
}; 

int main() 
{ 
	using namespace std; 
	int things[6] = {13, 31, 103, 301, 310, 130}; 
	
	struct debts mr_E[3] = 
	{ 
		{"Ima Wolfe", 2400.0}, 
		{"Ura Foxe", 1300.0}, 
		{"Iby Stout", 1800.0} 
	}; 

	double * pd[3]; 
	// Установка указателей на члены amount структур в mr_E 
	for (int i = 0; i < 3; i++ ) 
		pd[i] = &mr_E[i].amount; 

	
	cout << "Sum of all things: " << ShowArray(things, 6) << endl; // использует шаблон А 
	
	cout << "Sum of all debts: " << ShowArray(pd, 3) << endl; // использует шаблон В (более специализированный) 
	
	system("PAUSE");
	return 0; 
} 

template <typename T> 
T ShowArray(T arr[], int n) 
{ 
	using namespace std; 
	T sum = 0;
	
	cout << "template A\n"; 
	for (int i = 0; i < n; i++) 
		sum +=arr[i]; 
	
	return sum;
} 

template <typename T> 
T ShowArray (T * arr[], int n) 
{ 
	using namespace std; 
	T sum = 0;

	cout << "template B\n"; 
	for (int i = 0; i < n; i++ ) 
		sum +=*arr[i]; 
	
	return sum;
}