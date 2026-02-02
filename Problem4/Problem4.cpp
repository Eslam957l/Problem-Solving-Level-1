#include <iostream>
#include <iomanip>
using namespace std;


void MatrixNumber(int Arr[3][3], short Rows, short cols)
{
	int Counter = 1;

	for (int i = 0; Rows > i; i++)
	{
		for (int j = 0; cols > j; j++)
		{
			Arr[i][j] = Counter;

			cout << setw(3) << Counter++ << "  ";
		}
		cout << endl;
	
	}

}

int main()
{

	int Arr[3][3];

	cout << "The following is a 3x3 ordered matrix: \n\n";
	MatrixNumber(Arr, 3, 3);




	return 0;
}