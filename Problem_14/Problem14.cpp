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

short Check(int Matrix1[3][3],int Number, short Rows, short cols)
{
    for (int i = 0; Rows > i; i++)
    {
        for (int j = 0; cols > j; j++)
        {
            if (Matrix1[i][j] == Number)
                return 1;
        }
    }
    return 0;
}

int main()
{
     int Matrix1[3][3] = { {10,22,33},{54,96,75},{32,1,9} }; 
     int Number;
    cout << "Matrix: \n";
    PrintMatrix(Matrix1, 3, 3);

    cout << " Enter a Number? \n";
    cin >> Number;

    if (Check(Matrix1, Number, 3, 3))
        cout << "Yes, The Number is exist \n";
    else
        cout << "No, The Number is Not exist \n";

    return 0;
}