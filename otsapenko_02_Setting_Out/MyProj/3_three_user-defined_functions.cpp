#include <iostream>

using namespace std;
void first_func();
void second_func();

int main()
{
	first_func();
	first_func();
	second_func();
	second_func();
	cin.get();

	return 0;
}

void first_func()
{
cout << "Three blind mice" << endl;
}

void second_func()
{
cout << "See how they run" << endl;
}