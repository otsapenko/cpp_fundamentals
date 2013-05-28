#include <iostream> 
#include <string>

using namespace std; 

int my_func (string, int i = 0);

int main()
{
	int count = 0;
	string str = "Test string";
	
	count += my_func(str);
	count += my_func(str);
	count += my_func(str);
	count += my_func(str, count);

	system("PAUSE");
	return 0;
}

int my_func(string str, int n)
{
	int count = 0;
	if (n != 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << str << endl;
		}
	}
	else { cout << str << endl; }
	
	return  ++count;
}