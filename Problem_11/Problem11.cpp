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

bool IsIdentityMarix(int Matrix1[3][3], short Rows, short cols)
{
    for (int i = 0; Rows > i; i++)
    {
        for (int j = 0; cols > j; j++)
        {
            if (i == j && Matrix1[i][j] != 1)
            {
                return false;
            }
            else if (i != j && Matrix1[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
    

    cout << "Matrix: \n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsIdentityMarix(Matrix1, 3, 3))

        cout << "\nYES: Matrix is identity.";
    else
        cout << "\nNo: Matrix is NOT identity.";





    return 0;
}