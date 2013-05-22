#include<iostream>
#include<cstring>

using namespace std;
const int ArrSize = 120;

int main()
{
	char words[ArrSize];
	int count = 0;
	
	cout <<"Enter words (to stop, type the word done): " << endl;
	do
	 {
		 cin >> words;
		 ++count;
	 }
	 while (strcmp(words, "done") != 0);
	
	cout << "You entered a total of " << --count << " words.";
	
	cin.clear();
	cin.get();
	cin.get();
	
	return 0;
}