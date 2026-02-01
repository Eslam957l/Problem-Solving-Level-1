#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


int RandomNumber(int from, int to)
{

	int randomN = rand() % (to - from + 1) + from;

	return randomN;
}


void MatrixArray(int Arr[3][3], short Rows, short cols)
{


	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Arr[i][j] = RandomNumber(1, 100);
			cout << setw(3) << Arr[i][j] << "    ";
		}
		cout << endl;
	}

}

int SumRaw(int Arr[3][3], short RowNumber, short cols)
{
	 
	int Sum = 0;
	for (short j = 0; cols > j; j++)
	{
		Sum += Arr[RowNumber][j];
	}
	return Sum;
}

void PrintSum(int Arr[3][3], short Rows, short cols)
{
	for (short i = 0; Rows > i; i++)
	{
		cout << "Row " << i + 1 << " Sum :" <<	SumRaw(Arr, i, cols) << endl;
	}
}

int main()
{

	srand((unsigned)time(NULL));
	int Arr[3][3];


	cout << "The following is a 3x3 random matrix : \n";
	MatrixArray(Arr, 3, 3);

	cout << "\n\n\n";

	cout << "The following Sum Raw : \n";
	PrintSum(Arr, 3, 3 );


	return 0;
}