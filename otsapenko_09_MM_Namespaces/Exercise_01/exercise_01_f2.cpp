#include<iostream>
#include "exercise_h01.h";

using namespace std;

void setgolf(golf & g, const char * name, int he)
{
	strcpy_s(g.fullname, name);
	g.handicap = he;
}

int setgolf(golf & g)
{

	cout << "Please enter Full Name: ";
	cin.getline(g.fullname, Len);
	
	if (!strlen(g.fullname)) 
		return 0;
	
	cout << "Please enter handicap: ";
	cin >> g.handicap;
	cin.get();
	
	return 1;
}

void handicap(golf & g, int he)
{
	g.handicap = he;
}

void showgolf(const golf & g)
{
	if (!strlen(g.fullname))
	{
		cout << "None" << endl;
	}
	else
	{
		cout << "Name: " << g.fullname << endl;
		cout << "Handicap: " << g.handicap << endl;
	}
}