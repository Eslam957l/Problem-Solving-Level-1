#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdio>

using namespace std;

int RandomNumber(int from, int to)
{
    int randN = rand() % (to - from + 1) + from;
    return randN;
}

void MatrixwithRandom(int Array[3][3], short Rows, short cols)
{

    for (int i = 0; Rows > i; i++)
    {
        for (int j = 0; cols > j; j++)
        {
            Array[i][j] = RandomNumber(1, 10);
            printf(" %0*d ", 2, Array[i][j]);
        }
        cout << endl;
    }

}

void Matrix2withRandom(int Array2[3][3], short Rows, short cols)
{

    for (int i = 0; Rows > i; i++)
    {
        for (int j = 0; cols > j; j++)
        {
            Array2[i][j] = RandomNumber(1, 10);
            printf(" %0*d ", 2, Array2[i][j]);
        }
        cout << endl;
    }

}

bool Check(int Array[3][3], int Array2[3][3], short Rows, short cols)
{
    for (int i = 0; Rows > i; i++)
    {
        for (int j = 0; cols > j; j++)
        {
            if (Array[i][j] != Array2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    srand((unsigned)time(NULL));

    int Array[3][3], Array2[3][3];
    int Matrix[3][3], Matrix2[3][3];
    cout << "Matrices: " << endl;
    MatrixwithRandom(Array, 3, 3);

    cout << "\n\n";

    cout << "Matrices2: " << endl;
    Matrix2withRandom(Array2, 3, 3);

    cout << endl;

    if (Check(Array, Array2, 3, 3))
    {
        cout << "YES: both martices are equal.\n";
    }
    else
    {
        cout << "No: martices are NOT equal.\n";
    }


    return 0;
}