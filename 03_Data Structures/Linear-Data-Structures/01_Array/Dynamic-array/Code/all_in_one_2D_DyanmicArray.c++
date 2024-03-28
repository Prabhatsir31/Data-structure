#include <iostream>
#include <iomanip>
using namespace std;

//Functions prototypes
void display();
void input(int **arr, int row, int col);
void print(int **&matrix, int row, int col, int tempCol, int r);
void increase_row(int **&matrix, int &row, int col);
void decrease_row(int **&matrix, int &row, int col);
void increase_col(int **&matrix, int row, int &col, int &tempr);
void decrease_col(int **&matrix, int row, int &col, int &tempr);
void all_inOne_2D_array();

//Main
int main()
{
    all_inOne_2D_array();
    return 0;
}

//Diplay view
void display()
{
    cout << "\t\t\tEnter 1 to increse the size of rows:" << endl;
    cout << "\t\t\tEnter 2 to decrease the size of rows:" << endl;
    cout << "\t\t\tEnter 3 to increse the size of columns:" << endl;
    cout << "\t\t\tEnter 4 to decrease the size of columns:" << endl;
    cout << "\t\t\tEnter 5 to diplay the matrix" << endl;
    cout << "\t\t\tEnter 6 to exit the program" << endl;
}

//Input
void input(int **arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = (rand() % 9) + 1;
        }
    }
}

// prinf for the columns specfic row changed
void print(int **&matrix, int row, int col, int tempCol, int r)
{
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        cout << "\t\t  ";
        if (i != r)
        {
            for (int j = 0; j < col; j++)
            {
                cout << setw(7) << matrix[i][j];
            }
        }
        if (i == r)
        {
            for (int j = 0; j < tempCol; j++)
            {
                cout << setw(7) << matrix[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;
}


// Increase the size of the array at row
void increase_row(int **&matrix, int &row, int col)
{
    int r;
    cout << "Enter the number of rows you want to added:" << endl;
    cin >> r;
    // Allocate the temp memory eqaul to size incease in the array
    int **temp = new int *[row + r];
    for (int i = 0; i < row + r; i++)
    {
        temp[i] = new int[col];
    }
    // copy matrix array into the copy
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j] = matrix[i][j];
        }
    }
    // deleting the previous memory from heap of matrix
    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    // Copy the address of the temp array into the matrix array
    matrix = temp;
    // Entering the elements in the increase size of the array elements
    for (int i = row; i < row + r; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = (rand() % 99) + 30;
        }
    }
    // increase the size of the row in the main as
    row = row + r;
}

// Decrease the size of the array at row
void decrease_row(int **&matrix, int &row, int col)
{
    int r;
    cout << "Enter the number of rows you want to deleted from end:" << endl;
    cin >> r;
    if (row - r >= 0)
    {
        // Allocate the temp memory eqaul to size incease in the array
        int **temp = new int *[row - r];
        for (int i = 0; i < row - r; i++)
        {
            temp[i] = new int[col];
        }
        // copy matrix array into the copy
        for (int i = 0; i < row - r; i++)
        {
            for (int j = 0; j < col; j++)
            {
                temp[i][j] = matrix[i][j];
            }
        }
        // deleting the previous memory from heap of matrix
        for (int i = 0; i < row; i++)
        {
            delete[] matrix[i];
        }
        delete[] matrix;
        // Copy the address of the temp array into the matrix array
        matrix = temp;
        // decrease the size of the row in the main as
        row = row - r;
    }
    else
    {
        cout << "The number you enter is greater than the size of the arrar and are not exulded" << endl;
    }
}

// Increase the size of the array at column
void increase_col(int **&matrix, int row, int &col, int &tempr)
{
    int r, num;
    cout << "Enter the row number whose columns that you want to increase:" << endl;
    cin >> r;
    cout << "Enter the number of columns that you want to added:" << endl;
    cin >> num;
    // Allocating the temp memory for the r index
    int *temp = new int[col + num];
    // copy the elements in that array
    for (int i = 0; i < col; i++)
    {
        temp[i] = matrix[r][i];
    }
    // delete the previous array
    delete[] matrix[r];
    matrix[r] = temp;
    // Entering the elements in the array new indexes
    for (int i = col; i < col + num; i++)
    {
        matrix[r][i] = (rand() % 99) + 30;
    }
    col = col + num;
    tempr = r;
}

// Decrease the size of the array at columns
void decrease_col(int **&matrix, int row, int &col, int &tempr)
{
    int r, num;
    cout << "Enter the row number whose columns that you want to decrease:" << endl;
    cin >> r;
    cout << "Enter the number of columns that you want to deleted:" << endl;
    cin >> num;
    // Allocating the temp memory for the r index
    int *temp = new int[col - num];
    // copy the elements in that array
    for (int i = 0; i < col - num; i++)
    {
        temp[i] = matrix[r][i];
    }
    // delete the previous array
    delete[] matrix[r];
    // give address of the temp array to new array
    matrix[r] = temp;
    // decrease the size of the column
    col = col - num;
    // logic variable
    tempr = r;
}

//all functionalities
void all_inOne_2D_array()
{
    //local varibles
    int row;
    int col;
    int tempr = 0;
    bool flag = false;
    int n;

    //input row and columns at start
    cout << "Enter the number of rows : " << endl;
    cin >> row;
    cout << "Enter the number of columns : " << endl;
    cin >> col;
    int tempCol = col;

    
    // Allocating the 2d memory
    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }

    //input calling
    input(matrix, row, col);
    system("cls");

    //switchs 
    do
    {
        display();
        cin >> n;
        switch (n)
        {
        case 1:
        {
            increase_row(matrix, row, col);
            break;
        }
        case 2:
        {
            decrease_row(matrix, row, col);
            break;
        }
        case 3:
        {
            increase_col(matrix, row, tempCol, tempr);
            break;
        }
        case 4:
        {
            decrease_col(matrix, row, tempCol, tempr);
            break;
        }
        case 5:
        {
            print(matrix, row, col, tempCol, tempr);
            break;
        }
        case 6:
        {
            cout << "Quiting..................." << endl;
            flag = true;
            break;
        }
        }

    } while (flag == false);


    // Deallocating the memory
    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;


}
