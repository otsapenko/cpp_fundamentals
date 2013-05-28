#include<iostream>
#include<string>

using namespace std;
inline void upper(string & str) { for (int i = 0; i < str.size(); i++) {str[i] = toupper(str[i]);} };

int main()
{
	cout << "Enter a string (q to quit): ";
	string str = "";
	
	getline(cin, str);
	while (str + "\0" != "q")
	{		
		upper(str);
		cout << str << endl;
		cout << "Next string (q to quit): ";
		getline(cin, str);
	}

	cout << "Bye." <<endl;
	
	system("PAUSE");
	return 0;
}