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

short IsIdentityMarix(int Matrix1[3][3], int Number ,short Rows, short cols)
{
    short Counter = 0;

    for (int i = 0; Rows > i; i++)
    {
        for (int j = 0; cols > j; j++)
        {
            if (Matrix1[i][j] == Number)

                Counter++;
        };
    }
    return Counter;
}

int main()
{
    int Matrix1[3][3] = { {1,0,0},{0,9,0},{0,0,9} };
    

    cout << "Matrix: \n";
    PrintMatrix(Matrix1, 3, 3);

    int Number;
    cout << "Enter the number to count in matrix?\n";
    cin >> Number;

    cout << "Number " << Number << " count in matrix is: " << IsIdentityMarix(Matrix1, Number,3, 3);



    return 0;
}