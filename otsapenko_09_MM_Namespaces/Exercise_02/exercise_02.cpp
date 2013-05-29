#include<iostream> 
#include<string>

using namespace std;

const int ArSize = 10; 
void strcount(const string &); 

int main() 
{ 
	string input; 
	char next; 

	cout << "Enter a line: "; 
	getline(cin, input); 
	
	while (input != "")
	{ 		
		strcount(input); 
		
		cout << "Enter next line (empty line to quit) :\n"; 
		getline(cin, input);
	} 
	
	cout << "Bye\n"; 
		
	return 0; 
} 

void strcount(const string & str) 
{ 
	static int total = 0; // статическая локальная переменная 

	cout << "\"" << str << "\" contains "; 
	
	total += str.size(); 
	
	cout << str.size() << " characters\n"; 
	cout << total << " characters total\n"; 
}