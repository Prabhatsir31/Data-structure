/*Write a c++ program to write the two dimensional dynamic arrays*/
/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/
#include <iostream>
#include<iomanip>

using namespace std;

void inputDynamicArray(int **&matrix, int row, int col)
{
    cout<<"The random elements in the array :"<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            // matrix[i][j]=(rand()%10)+1;
            cin>>matrix[i][j];
        }
    }
}

void outputDynamicArray(int **&matrix, int row, int col)
{
    cout<<"The elements in the array :"<<endl;
    for (int i = 0; i < row; i++)
    {
        cout<<left;
        for (int j = 0; j < col; j++)
        {
            cout<<setw(5)<<matrix[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    int row = 4;
    int col = 3;

    //allocating the dynamic memory
    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }

    inputDynamicArray(matrix,row,col);
    outputDynamicArray(matrix,row,col);
    

    //dellocating the dynamic memory
    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;

    return 0;
}