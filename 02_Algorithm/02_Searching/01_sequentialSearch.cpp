/**
 * @file sequentialSearch.cpp
 * @author Muhib Arshad(@muhib7353 at everyone)
 * @brief Time Complexity: have worst case O(log n) and best case O(1)
 * @date 2023-01-24
 */

// Write a C++ program for the sequential search
#include <iostream>
using namespace std;
int main()
{
    int size, ele, index = -1;
    cout << "Enter the size :";
    cin >> size;
    int *arr = new int[size];

    cout << "Enter the elements in the array:";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element no " << i + 1 << " : ";
        cin >> *(arr + i);
    }
    cout << "Enter the element to be searched :";
    cin >> ele;
    for (int i = 0; i < size; i++)
    {
        if (*(arr + i) == ele)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index " << index;
    }
    return 0;
}
