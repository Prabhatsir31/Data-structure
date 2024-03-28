/*Write a C++ program to delete the specfic element at the specfic position in one dimensional dynamic array*/
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

void displayDyanmicArr(int *&arr, int size)
{
    cout << "The elements in the array are given as:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void deleteElement(int *&arr, int &size)
{
    int index;
    cout << "Enter the position of the element that you wnat to delete:" << endl;
    cin >> index;

    // firstly delete the element and make the last index element to zero
    for (int i = index - 1; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // decreasing size of the array -1 to after deleting
    int *temp = new int[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    size--;
}

int main()
{
    int size;
    cout << "Enter the size of the array:" << endl;
    cin >> size;

    int *dynamicArr = new int[size];
    inputDynamicArr(dynamicArr, size);
    displayDyanmicArr(dynamicArr, size);

    deleteElement(dynamicArr, size);
    displayDyanmicArr(dynamicArr, size);

    delete[] dynamicArr;
    dynamicArr=nullptr;

    return 0;
}