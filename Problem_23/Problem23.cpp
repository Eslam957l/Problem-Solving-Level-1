#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char ReadLetter()
{
	char ch1;
	cout << "Please Enter a Charcter?\n";
	cin >> ch1;

	return ch1;

}

bool IsVowel(char ch1)
{
	ch1 = tolower(ch1);

	return (ch1 == 'a' || ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u');
}


int main()
{
	char ch1;

	ch1 = ReadLetter();

	if (IsVowel(ch1))
		cout << "\nYes Letter '" << ch1 << "' is Vowel \n";
	else
		cout << "\n No Letter '" << ch1 << "' is Not Vowel\n";
	

	system("pause>0");
}