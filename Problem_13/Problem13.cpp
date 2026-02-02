#include <iostream>
#include <iomanip>
using namespace std;

void PrintMatrix(int Array[3][3], short Rows, short cols)
{

    for (int i = 0; Rows > i; i++)
    {
        for (int j = 0; cols > j; j++)
        {
            cout << setw(3) << Array[i][j] << " ";
        }
        cout << endl;
    }


}

short SparseMatrix(int Matrix1[3][3], short Rows, short cols)
{
    int CounterZero = 0;
    int Total = Rows * cols;

    for (int i = 0; Rows > i; i++)
    {
        for (int j = 0; cols > j; j++)
        {
            if (Matrix1[i][j] == 0)
                CounterZero++;
        }

    }

    if (CounterZero > Total / 2)
        return 1;
    else
        return 0;
    
  
}

int main()
{
    int Matrix1[3][3] = { {1,2,3},{4,9,5},{0,0,9} };   //NotSpare
    //int Matrix1[3][3] = { {0,0,0},{0,9,5},{0,0,9} };  // Spare

    cout << "Matrix: \n";
    PrintMatrix(Matrix1, 3, 3);

    if (SparseMatrix(Matrix1, 3, 3))
        cout << "The Spare Marix. \n";
    else
        cout << "This is Not Spare Matrix. \n";



    return 0;
}