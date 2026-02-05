#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{

	string S1;
	cout << "Please enter a string ? \n";
	getline(cin, S1);
	return S1;

}

void PrintChar(string S1)
{

	bool isFristChar = true;

	cout << "\nThe string after conversion: \n";

	for (short i = 0; S1.length() > i; i++)
	{
		if (S1[i] != ' ' && isFristChar)
		{
			S1[i] = tolower(S1[i]);
		}
		isFristChar = (S1[i] == ' ' ? true : false );
	}
	cout << S1 << endl;

}

int main()
{

	PrintChar(ReadString());

	return 0;
}