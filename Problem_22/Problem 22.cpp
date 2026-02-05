#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter a String ? \n";
	getline(cin, S1);
	return S1;
}

char ReadChar()
{
	char ch1;
	cout << "\nPlease enter a Charcter ?\n";
	cin >> ch1;

	return ch1;
}

short PrintChar(string S1, char ch1)
{
	short Counter = 0;

	for (short i = 0; S1.length() > i; i++)
	{
		if (S1[i] == ch1)
		{
			Counter++;
		}
	}

	cout << "\nThe character '" << ch1 << "' appears " << Counter << " times.\n";

	return Counter;
}

int main()
{
	string S1;
	S1 = ReadString();
	char ch1;
	ch1 = ReadChar();

	PrintChar(S1, ch1);


	system("Pause>0");
}