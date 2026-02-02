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

void TransposeMatrix(int Arr[3][3], int ArrTranspose[3][3], short Rows, short cols)
{

	for (int i = 0; Rows > i; i++)
	{
		for (int j = 0; cols > j; j++)
		{
			ArrTranspose[i][j] = Arr[j][i];
			cout << setw(3) << Arr[j][i] << "   ";
		}
		cout << endl;
	}



}

int main()
{

	int Arr[3][3];
	int ArrTranspose[3][3];
	cout << "The following is a 3x3 ordered matrix: \n\n";
	MatrixNumber(Arr, 3, 3);

	cout << "\n\nThe following is a 3x3 ordered Transpose Matrix: \n\n";
	TransposeMatrix(Arr, ArrTranspose, 3, 3);




	return 0;
}