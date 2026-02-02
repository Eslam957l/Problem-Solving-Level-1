#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int RandomNumber(int from, int to)
{
	int randN = rand() % (to - from) + from;

	return randN;
}

void MatwithRandom(int Array1[3][3], short Rows, short cols)
{

	for (int i = 0; Rows > i; i++)
	{
		for (int j = 0; cols > j; j++)
		{
			Array1[i][j] = RandomNumber(1, 10);
		}
		cout << endl;
	}

}

void PrintMat(int Array1[3][3], short Rows, short cols)
{

	for (int i = 0; Rows > i; i++)
	{
		for (int j = 0; cols > j; j++)
		{
			printf(" %0*d ", 2, Array1[i][j]);
		}
		cout << endl;
	}


}

void MiddleRows(int Array1[3][3], short Rows, short cols)
{
	short MiddleRow = Rows / 2;

	for (short j = 0; cols > j; j++)
	      {
              printf(" %0*d ", 2 ,Array1[MiddleRow][j]);
	      }
		cout << "\n";

}

void Middlecols(int Array1[3][3], short Rows, short cols)
{

	short Middlecols = cols / 2;
	
		for (int j = 0; Rows > j; j++)
		{
			printf(" %0*d ", 2, Array1[j][Middlecols]);
		}
		cout << endl;
	
}

int main()
{

	srand((unsigned)time(NULL));
	int Mat1[3][3];

	MatwithRandom(Mat1, 3, 3);
	cout << " Matrix with Random Number is : \n";
	PrintMat(Mat1, 3, 3);

	
	cout << "Middle Rows: \n";
	MiddleRows(Mat1, 3, 3);

	
	cout << "Middle cols: \n";
	Middlecols(Mat1, 3, 3);





	return 0;
}

