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
			printf(" %0*d ", 2, Array1[i][j]);
		}
		cout << endl;
	}

}

int calculateSum(int Mat1[3][3], short Rows, short cols)
{
	int Sum = 0;
	for (short i = 0; Rows > i; i++)
	{
		for (short j = 0; cols > j; j++)
		{
			Sum += Mat1[i][j];
		}
		
	}
	return Sum;
}

int main()
{

	srand((unsigned)time(NULL));
	int Mat1[3][3];

	
	cout << " Matrix with Random Number is : \n";
	MatwithRandom(Mat1, 3, 3);

	cout << "\n Sum : " << calculateSum(Mat1, 3, 3);
	

	return 0;
}

