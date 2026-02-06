#include <iostream>
#include <string>
#include <vector>
using namespace std;

string Readstring()
{
	string S1;
	cout << "Please Enter a string?\n";
	getline(cin, S1);

	return S1;

}

vector <string> SplitString(string S1, string delim)
{
	vector <string> vString;

	string sword;
	short pos = 0;

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sword = S1.substr(0, pos);

		if (sword != "")
		{
			vString.push_back(sword);
		}
		S1.erase(0, pos + delim.length());

	}
		if (S1 != "")
		{
			vString.push_back(S1);
		}
	
	return vString;
}

int main()
{
	vector <string> vString;

	vString = SplitString(Readstring(), " ");

	cout << "Tokens: " << vString.size() << endl;

	for (string& S : vString)
	{
		cout << S << endl;
	}


	system("pause>0");
}
