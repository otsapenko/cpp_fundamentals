#include<iostream>
#include<cctype>

using namespace std;

int main()
{
	char ch;
	
	do
	{
		cin.get(ch);
		
		if(isdigit(ch))
		{
			cin.clear();
			continue;
		}
		
		if (ch != '@')
		{
		ch = islower(ch) ? toupper(ch) : tolower(ch);
		cout << ch;
		}
	
	} while(ch != '@');
	
	return 0;
}