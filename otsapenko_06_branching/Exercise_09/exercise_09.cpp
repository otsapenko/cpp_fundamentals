#include<iostream>
#include<string>
#include<fstream>

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
	const char file_name[] = "test_data.txt";
	
	ifstream File;
	File.open(file_name);

	if (!File.is_open())
	{
		cout << "Could not open the file " << file_name << endl; 
		cout << "Program terminating." << endl; 
		exit(EXIT_FAILURE);
	}
	
	File >> don_num;
	File.get();

	donators *new_donators = new donators[don_num];
	
	for (int i = 0; i < don_num; i++)
	{
		getline(File, new_donators[i].Name);
		
		File >> new_donators[i].donation;
		File.get();
		
		if (new_donators[i].donation >= big_donation)
			g_patrons += "Name: " + new_donators[i].Name + "   Donate: " + to_string(new_donators[i].donation) + '\n';
		else
			patrons += "Name: " + new_donators[i].Name + "   Donate: " + to_string(new_donators[i].donation) + '\n';
	}
	
	File.close();
	
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