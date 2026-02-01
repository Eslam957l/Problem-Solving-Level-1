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
			cout << Arr[i][j] << "    ";
		}
		cout << endl;
	}

}

int main()
{

	srand((unsigned)time(NULL));
	int Arr[3][3];


	cout << "The following is a 3x3 random matrix : \n";
	MatrixArray(Arr, 3, 3);


	return 0;
}