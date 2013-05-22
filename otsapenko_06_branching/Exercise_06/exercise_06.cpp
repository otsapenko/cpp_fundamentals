#include<iostream>
#include<string>

using namespace std;

const int big_donation = 10000;
void clear_stream();

void clear_stream(void)
{
	cin.clear();
	 while (std::cin.get() != '\n')
		continue;
}

struct donators
{
	string Name;
	double donation;
};

int main()
{
	int don_num = 0;
	string g_patrons = "";
	string patrons = "";
	
	cout << "Please enter  a number of Donators: ";
	while (!(cin >> don_num))
	{
		clear_stream();
		cout << "NUMBER! please: ";
	}
	cin.get();
	
	donators *new_donators = new donators[don_num];

	for (int i = 0; i < don_num; i++)
	{
		cout << "Please enter donator Name: ";
		getline(cin, new_donators[i].Name);
		
		cout << "Please enter amount of donation: ";
		while (!(cin >> new_donators[i].donation))
		{
			clear_stream();
			cout << "NUMERIC! value please: ";
		}
		cin.get();
		
		if (new_donators[i].donation >= big_donation)
			g_patrons += "Name: " + new_donators[i].Name + "   Donate: " + to_string(new_donators[i].donation) + '\n';
		else
			patrons += "Name: " + new_donators[i].Name + "   Donate: " + to_string(new_donators[i].donation) + '\n';
	}
	
	cout << "Grand Patrons" << endl;
	if (g_patrons.empty())
		cout << "none";
	else
		cout << g_patrons;
	
	cout << endl << endl;
	
	cout << "Patrons" << endl;
	if (patrons.empty())
		cout << "none";
	else
		cout << patrons;


	delete [] new_donators;
	
	system("PAUSE");
	return 0;
}