/**
 * @file bubbleSort.cpp
 * @author Muhib Arshad(@muhib7353 at everyone)
 * @brief Create a function named void bubble-sort.
With parameters array itself and its size.
This function must bubble sort the array
which is passed as a parameter.
Also, create a function printArray which will
print your bubble-sorted array.
Note:
Both functions must be called in the main
with the correct output. The false output will be
graded as zero..........
 * @date 2023-01-26
 */
#include <iostream>
using namespace std;
void bubbleSort(int arr[], const int &size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void output(int arr[], const int &size)
{
    cout << "The elements in the array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\n";
    }
}

int main()
{
    int arr[6] = {4, 5, 6, 1, 2, 3};
    output(arr, 6);
    bubbleSort(arr, 6);
    output(arr, 6);

    return 0;
}
