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

void printEachWordInString(string S1)
{
	string delim = " ";
	cout << "\n Your String Words are: \n\n ";
	string sword;
	short pos = 0;

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sword = S1.substr(0, pos);
		
		if (sword != "")
		{
			cout <<sword << endl;
		}
		S1.erase(0, pos + delim.length());
	}

	if (S1 != " ")
	{
		cout <<S1 << endl;
	}

}

int main()
{

	printEachWordInString(Readstring());

	system("pause>0");
}

