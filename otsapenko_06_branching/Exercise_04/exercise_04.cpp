#include<iostream>

using namespace std;

const int stringsize = 20;
const int structsize = 3;
void show_menu();
void show_results(char);

struct bop
{
	char fullname[stringsize];
	char title[stringsize];
	char bopname[stringsize];
	int preference;
};

bop my_struct[structsize] =
{
	{"Vasia Pupkin", "Janitor", "Agent-007", 0},
	{"Rajesh Kutropali", "Physicist", "Alien", 1},
	{"Gogi Zurabovich", "Programmer", "Beast", 2}
};

void show_menu()
{
	cout << "Benevolent Order of Programmers Report " << endl
			<< "a. display by name		b. display by title" << endl
			<< "c. display by bopname   d. display by preference" << endl
			<< "q. quit" << endl;
}

void show_results(char display_by)
{
	
	for (int i = 0; i < structsize; i ++)
	{
		if (display_by == 'a')
			cout << my_struct[i].fullname << endl;
		else if (display_by == 'b')
			cout << my_struct[i].title << endl;
		else if (display_by == 'c')
			cout << my_struct[i].bopname << endl;
		else if (display_by == 'd')
			if (my_struct[i].preference == 0)	
				cout << my_struct[i].fullname << endl;
			else if (my_struct[i].preference == 1)
				cout << my_struct[i].title << endl;
			else if (my_struct[i].preference == 2)
				cout << my_struct[i].bopname << endl;
	}
}

int main()
{
	char choice;
	
	show_menu();
	cout << "Enter your choise: ";
	cin.get(choice);
	
	while (choice != 'q')
	{
		switch (choice)
		{
		case 'a': show_results(choice);
			break;
		case 'b': show_results(choice);
			break;
		case 'c': show_results(choice);
			break;
		case 'd': show_results(choice);
			break;
		case 'q': cout << "Bye!";
			break;
		default:
			cout << "Please enter a, b, c, d, or q";
		}
		cin.get();
		cout << endl;
		cout << "Next choise: ";
		cin.get(choice);
	} 
	
	return 0;
}

