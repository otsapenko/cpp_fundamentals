#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	const char file_name[] = "test_data.txt";
	int ch_count = 0;
	string file_data = "";

	ifstream File;
	File.open(file_name);

	if (!File.is_open())
	{
		cout << "Could not open the file " << file_name << endl; 
		cout << "Program terminating." << endl; 
		exit(EXIT_FAILURE);
	}

	string tmp_str = "";
	
	while (File.good())
	{
		getline(File, tmp_str);
		file_data += tmp_str;
	}

	if (File.eof()) 
		cout << "End of file reached.\n"; 
	else if (File.fail()) 
		cout << "Input terminated by data mismatch.\n"; 
	else 
		cout << "Input terminated for unknown reason.\n"; 
	if (file_data.empty()) 
		cout << "No data processed.\n"; 
	else 
		cout << "Items read: " << file_data.size() << endl;
	
	File.close();
	
	system("PAUSE");
	
	return 0;
}