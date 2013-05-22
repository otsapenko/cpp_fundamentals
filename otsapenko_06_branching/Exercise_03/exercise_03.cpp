#include<iostream>

using namespace std;

int main()
{
	char choice;
	cout << "Please enter one of the following choices: " << endl
			<< "c) carnivore p) pianist" << endl
			<< "t) tree g) game" << endl;
	
	bool done = false;
	while (!done)
	{
		cin.get(choice);
		switch (choice)
		{
		case 'c': cout << "carnivore" << endl;
			done = true;
			break;
		case 'p': cout << "pianist" << endl;
			done = true;
			break;
		case 't': cout << 'tree' << endl;
			done = true;
			break;
		case 'g': cout << 'game' << endl;
			done = true;
			break;
		default:
			cout << "Please enter a c, p, t, or g: ";
		}
	}
	
	system("PAUSE");
	
	return 0;
}