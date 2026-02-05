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

short PrintChar(string S1 , char ch1)
{
	short Counter = 0;
	char ch1;
	cout << "\nPlease enter a Charcter ?\n";
	cin >> ch1;

	for (short i = 0; S1.length() > i; i++)
	{
		if (S1[i] == ch1)
		{
			Counter++;
		}
	}
	cout << Counter;


	cout << "\nThe character '" << ch1 << "' appears " << Counter << " times.\n";

	return Counter;
}

int main()
{
	string S1;
	char ch1;
	S1 = ReadString();

	PrintChar(S1,ch1);

	
	system("Pause>0");
}