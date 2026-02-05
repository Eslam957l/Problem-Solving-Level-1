#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string ReadString()
{

	string S1;
	cout << "Please Enter a String ?\n";
	getline(cin, S1);
	return S1;

}

void printSmallLetter(string S1)
{

	cout << "\n\nThe String After Conversion:\n\n";

	for (short i = 0; S1.length() > i; i++)
	{
		S1[i] = tolower(S1[i]);
	}

	cout << S1 << endl;

}

void PrintCapitalLetter(string S1)
{
	cout << "\n\nThe String After Conversion: \n\n";

	for (short i = 0; S1.length() > i; i++)
	{
		S1[i] = toupper(S1[i]);
	}

	cout << S1 << endl;
}

int main()
{

	string S1;

	 S1 = ReadString();
	PrintCapitalLetter(S1);
	printSmallLetter(S1);


	return 0;
}