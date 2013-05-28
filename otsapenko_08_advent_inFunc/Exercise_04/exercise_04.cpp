#include <iostream> 
#include <cstring> // для strlen(), strcpyO 

using namespace std; 

struct stringy { 
char * str; // указывает на строку 
int ct; // длина строки (не считая символа '\0') 
};

void set(stringy &, const char[]);
void show(const stringy &, int i = 0);
void show(const char[], int i = 0);

int main () 
{ 
	stringy beany; 
	char testing [] = "Reality isn't what it used to be."; 
	
	set(beany, testing); // первым аргументом является ссылка, 
// Выделяет пространство для хранения копии testing, 
// использует элемент типа str структуры beany как указатель 
// на новый блок, копирует testing в новый блок и 
// создает элемент ct структуры beany 

	show(beany); // выводит строковый член структуры один раз 
	show (beany, 2); // выводит строковый член структуры два раза 
	
	testing[0] = 'D'; 
	testing[1] = 'u'; 
	
	show(testing); // выводит сроку testing один раз 
	show(testing, 3); // выводит строку testing три раза 
	show("done!"); 

	delete [] beany.str;
	
	system("PAUSE");
	
	return 0; 
} 

void set(stringy & my_struct, const char str[])
{
	char * str_copy = new char[strlen(str) + 1];
	
	strcpy(str_copy, str);

	my_struct.str = str_copy;
	my_struct.ct = strlen(str_copy);
}

void show(const stringy & my_struct, int n)
{
	if (n != 0)
	{
		for (int i = 0; i < n; i++)
			cout << my_struct.str << endl;
	}
	
	else
		cout << my_struct.str << endl;
}

void show(const char str[], int n)
{
	if (n != 0)
	{
		for (int i = 0; i < n; i++)
			cout << str << endl;
	}
	
	else
		cout << str << endl;
}