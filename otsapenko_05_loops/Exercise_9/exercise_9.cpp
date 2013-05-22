#include<iostream>
#include<string>

using namespace std;

int main()
{
	string words;
	int count = 0;
	
	cout <<"Enter words (to stop, type the word done): " << endl;
	do
	 {
		 cin >> words;
		 ++count;
	 }
	 while (words != "done");
	
	cout << "You entered a total of " << --count << " words.";
	
	cin.clear();
	cin.get();
	cin.get();
	
	return 0;
}