/**
 * @file insertion_sort.cpp
 * @author Muhib Arshad(@muhib7353 at everyone)
 * @brief Create a function named void insertion_sort.
With parameters array itself and its size.
This function must insertion_sort the array
which is passed as a parameter...
Also, create a function printArray which will
print your insertion_sorted array.
Note:
Both functions must be called in the main
with the correct output. The false output will be
graded as zero....................
 * @date 2023-01-26
 */
#include <iostream>

using namespace std;

void insertion_sort(int arr[], const int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            int temp = arr[i];
            int loc = i;
            do
            {
                arr[loc] = arr[loc - 1];
                loc--;
            } while (loc > 0 && arr[loc - 1] > temp);
            arr[loc] = temp;
        }
    }
}
void print(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
}
int main()
{
    int arr[5]{2, 3, 1, 5, 0};
    insertion_sort(arr, 5);
    print(arr, 5);

    return 0;
}