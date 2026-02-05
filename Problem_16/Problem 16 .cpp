#include <iostream>
#include <string>
using namespace std;


string ReadString()
{
	string S1;
	cout << "Please enter a string ?\n";
	getline(cin, S1);
	return S1;

}


void PrintChar(string S1)
{

	bool isFristLetter = true;

	cout << "\n\nThe Frist Char in every word \n";
	for (short i = 0; S1.length() > i; i++)
	{

		if (S1[i] != ' ' && isFristLetter)
		{
			cout << S1[i] << endl;

		}

		isFristLetter =  (S1[i] == ' ' ? true : false);
	}
}

int main()
{

	PrintChar(ReadString());




	return 0;
}