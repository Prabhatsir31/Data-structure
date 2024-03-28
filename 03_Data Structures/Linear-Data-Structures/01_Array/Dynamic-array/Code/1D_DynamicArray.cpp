
/*Write a program to make a dynamic one dimensional array in C++
*/
/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/

#include <iostream>

using namespace std;

void inputDynamicArr(int *&arr, int size)
{
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void outputDynamicArr(int *&arr, int size)
{
    cout << "The elements in the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size = 5;
    int *arr = new int[size];

    inputDynamicArr(arr, size);
    outputDynamicArr(arr, size);

    delete[] arr;
    arr = nullptr;

    return 0;
}