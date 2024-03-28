/*Write a C++ program to decrease rows of 2D-Arrays during runTime*/
/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/
#include <iostream>
#include <iomanip>

using namespace std;

void inputDynamicArray(int **&matrix, int row, int col)
{
    cout << "The random elements in the array :" << endl;
    for (int i = 0; i < row; i++)
    {
        // cout<<"Enter the row "<<i+1<<" :"<<endl;
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = (rand() % 10) + 1;
            // cin>>matrix[i][j];
        }
    }
}

void outputDynamicArray(int **&matrix, int row, int col)
{
    cout << "The elements in the array :" << endl;
    for (int i = 0; i < row; i++)
    {
        cout << left;
        for (int j = 0; j < col; j++)
        {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}

void decreaseRows(int **&matrix, int &row, int col)
{

    int num;
    cout << "Enter the number of rows that you want to decrease:" << endl;
    cin >> num;
    while (num > row)
    {
        cout << "Your number " << num << " is greater than the " << row << endl;
        cout << "Please : Enter the number less than the number of the rows :" << endl;
        cin >> num;
    }
    // decrease the size of the rows
    int **temp = new int *[row - num];
    for (int i = 0; i < row - num; i++)
    {
        temp[i] = new int[col];
    }
    for (int i = 0; i < row - num; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = temp;
    row -= num;
}
int main()
{
    int row, col;
    cout << "Enter the number of rows : " << endl;
    cin >> row;
    cout << "Enter the number of columns : " << endl;
    cin >> col;

    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }

    inputDynamicArray(matrix, row, col);
    outputDynamicArray(matrix, row, col);

    decreaseRows(matrix, row, col);
    cout << "The dynamic array after the decrease size of the rows:" << endl;
    outputDynamicArray(matrix, row, col);

    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;

    return 0;
}