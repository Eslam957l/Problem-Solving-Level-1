#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string Readstring()
{
	string S1;
	cout << "Please Enter a string?\n";
	getline(cin, S1);

	return S1;

}

bool IsVowel(char ch1)
{
	ch1 = tolower(ch1);

		return (ch1 == 'a' || ch1 == 'e' || ch1 == 'i' || ch1 == 'o' || ch1 == 'u');
}

short CountVowel(string S1)
{
	short Counter = 0;

	for (short i = 0; S1.length() > i; i++)
	{
		if (IsVowel(S1[i]))
		{
			Counter++;
		}
	}
	return Counter;
}

int main()
{
	string S1;
	S1 = Readstring();

	cout << "\nNumber of is Vowel is: " << CountVowel(S1) << endl;

	system("pause>0");
}

