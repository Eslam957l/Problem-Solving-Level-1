#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char ReadString()
{
	char Char;
	cout << "Please Enter a Charcter ? \n";
	cin >> Char;
	return Char;
}

char InvertCharCase(char Ch1)
{
	return isupper(Ch1) ? tolower(Ch1) : toupper(Ch1);
}

int main()
{

	char Char = ReadString();
	cout << "\nChar After Inverting Case: \n";
	Char = InvertCharCase(Char);
	cout << Char << endl;


	system("Pause>0");


}