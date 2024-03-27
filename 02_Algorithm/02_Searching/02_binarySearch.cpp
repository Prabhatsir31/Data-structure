/**
 * @file binarySearch.cpp
 * @author Muhib Arshad(@muhib7353 at everyone)
 * @brief Time Complexity: have worst case O(log n) and best case O(1)
 * @e https://github.com/TheAlgorithms/C-Plus-Plus/blob/master/search/binary_search.cpp
 * @date 2023-01-23
 */

#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int *&arr, const int &size, const int &ele)
{
    int first = 0;
    int last = size - 1;
    int middle = 0;
    while (first <= last)
    {
        middle = (first + last) / 2;
        if (ele < arr[middle])
            last = middle - 1;
        else if (ele > arr[middle])
            first = middle + 1;
        else
            return middle;
    }
    throw("Such Element does not exist");
}

void input(int *&arr, const int &size)
{
    cout << "Enter the elements in the array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element no " << i + 1 << " : ";
        cin >> *(arr + i);
    }
}

void output(int *&arr, const int &size)
{
    cout << "The elements in the array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << "\n";
}

int main()
{
    int size, ele, index = -1;
    cout << "Enter the size :";
    cin >> size;
    int *arr = new int[size];

    input(arr, size);
    sort(arr, arr + size);
    output(arr, size);

    try
    {
        cout << "Enter the element that you want to search its index position:\n";
        cin >> ele;
        index = binarySearch(arr, size, ele);
    }
    catch (const char *str)
    {
        cout << str << "\n";
    }

    if (index >= 0)
    {
        cout << "The index position of element = " << index << "\n";
    }

    delete[] arr;

    return 0;
}