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

short Minimum(int Matrix1[3][3], short Rows, short cols)
{
    int  Mini = Matrix1[0][0];
    for (int i = 0; Rows > i; i++)
    {
        for (int j = 0; cols > j; j++)
        {
            if (Matrix1[i][j] < Mini )
            Mini = Matrix1[i][j];
        }
    }
    return Mini;
}

short Maximum(int Matrix1[3][3], short Rows, short cols)
{
    int  Max = Matrix1[0][0];
    for (int i = 0; Rows > i; i++)
    {
        for (int j = 0; cols > j; j++)
        {
            if (Matrix1[i][j] > Max)
                Max = Matrix1[i][j];
        }
    }
    return Max;
}

int main()
{
     int Matrix1[3][3] = { {10,22,33},{54,96,75},{32,1,9} }; 
     
    cout << "Matrix: \n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "Minimum Number is : " <<
    Minimum(Matrix1, 3, 3);

    cout << "\n\nMaximum Number is : " <<
    Maximum(Matrix1, 3, 3);
    


    return 0;
}