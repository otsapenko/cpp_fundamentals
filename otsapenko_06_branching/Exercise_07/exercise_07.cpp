#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
	string word = "";
	int w_vowels = 0;
	int w_conson = 0;
	int w_others = 0;

	cout << "Enter words (q to quit): " << endl;

	do
	{
		cin >> word;

		if (isalpha(word[0]))
		{
			if (word[0] == 'a' || word[0] == 'A' ||
				word[0] == 'e' || word[0] == 'E' ||
				word[0] == 'i' || word[0] == 'I' ||
				word[0] == 'o' || word[0] == 'O' ||
				word[0] == 'u' || word[0] == 'U') {
					w_vowels++; }
			else
				w_conson++;
		}
		else
			w_others++;

	} while (word != "q");
	
	cout << w_vowels << " words beginning with vowels" << endl;
	cout << --w_conson << " words beginning with consonants" << endl;
	cout << w_others << " others" << endl;

	system("PAUSE");

	return 0;
}
