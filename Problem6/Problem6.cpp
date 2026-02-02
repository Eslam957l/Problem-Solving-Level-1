#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int RandomNumber(int from, int to)
{
	int randN = rand() % (to - from) + from;

	return randN;
}

void Matrix1(int Array1[3][3], short Rows, short cols)
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

void PrintMatrix(int Array1[3][3], short Rows, short cols)
{
	for (int i = 0; Rows > i; i++)
	{
		for (int j = 0; cols > j; j++)
		{
			printf(" %0*d ", 2, Array1[i][j]);
		}
		cout << "\n";
	}
}

void MultiplyMatrix(int Mat1[3][3], int Mat2[3][3], int Mat3[3][3], short Rows, short cols)
{

	for (int i = 0; Rows > i; i++)
	{
		for (int j = 0; cols > j; j++)
		{
			Mat3[i][j] = Mat1[i][j] * Mat2[i][j];
		}

	}
}

int main()
{

	int Mat1[3][3], Mat2[3][3], Mat3[3][3];
	srand((unsigned)time(NULL));


	Matrix1(Mat1, 3, 3);
	cout << "Matrix1: \n";
	PrintMatrix(Mat1, 3, 3);


	Matrix1(Mat2, 3, 3);
	cout << " Matrix2: \n";
	PrintMatrix(Mat2, 3, 3);

	MultiplyMatrix(Mat1, Mat2, Mat3, 3, 3);

	cout << "\nMultiplyMatrix : \n";
	PrintMatrix(Mat3, 3, 3);





	return 0;
}