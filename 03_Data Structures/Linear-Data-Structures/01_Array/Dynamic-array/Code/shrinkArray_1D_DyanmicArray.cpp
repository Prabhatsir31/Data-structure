/*Write a C++ program to shrink the one dimensional dyanmic array*/
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
    cout << endl;
}

void outputDynamicArr(int *&arr, int size)
{
    cout << "The elements in the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shrinkArray(int *&arr, int &size)
{
    int num;
    cout << "Enter the num of how such size that you want to shrink(decrease):" << endl;
    cin >> num;

    //input validation
    while (num > size)
    {
        cout << "The number you entered " << num << " is greater than the " << size << endl;
        cout << "Please Enter the Valid number:(less than " << size << " ) " << endl;
        cin>>num;
    }
     
    //shrinking array 
    int *temp = new int[size - num];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    size -= num;
    cout << endl;
}

int main()
{
    int size;

    cout << "Enter the size of the array:" << endl;
    cin >> size;

    int *arr = new int[size];

    inputDynamicArr(arr, size);
    outputDynamicArr(arr, size);

    shrinkArray(arr, size);
    outputDynamicArr(arr, size);

     delete[] arr;
    arr=nullptr;

    return 0;
}
