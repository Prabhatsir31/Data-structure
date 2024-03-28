/*Write a C++ program to decrease the size of the columns by using Two dimensional (2D) dynamic arrays .
 */
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

void decreaseColumns(int **&matrix, int row, int &col)
{
    int num;
    cout << "Enter the number how much you want to increase to number of columns :" << endl;
    cin >> num;

    //decreasing the number of columns
    col -= num;

    //changing the size of columns dynamically
    int **tempCol = new int *[row];
    {
    for (int i = 0; i < row; i++)
        tempCol[i] = new int[col];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            tempCol[i][j] = matrix[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = tempCol;
}

int main()
{
    int row, col;
    cout << "Enter the number of rows:" << endl;
    cin >> row;
    cout << "Enter the number of the columns :" << endl;
    cin >> col;

    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }

    inputDynamicArray(matrix, row, col);
    outputDynamicArray(matrix, row, col);

    decreaseColumns(matrix, row, col);
    cout << "The dynamic array after the decrease size of the columns:" << endl;
    outputDynamicArray(matrix, row, col);

    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;

    return 0;
}