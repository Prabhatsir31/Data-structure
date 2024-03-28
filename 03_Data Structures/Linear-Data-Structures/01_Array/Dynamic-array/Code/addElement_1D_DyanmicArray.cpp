
/*Write a C++ program to add element in the one dimensional dyanmic array
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
    cout << endl;
}

void addElement(int *&arr, int &size)
{
    int num;
    cout << "Enter the number how much you wnat to increase the size of the array : " << endl;
    cin >> num;

    // changing size of the array
    int *temp = new int[size + num];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    size += num;

    // adding elements in the array
    cout << "Enter the elements that you want to add in the end of the array:" << endl;
    for (int i = size - num; i < size; i++)
    {
        cin >> arr[i];
    }

}

int main()
{
    int size;
    cout << "Enter the size of the array:" << endl;
    cin >> size;

    int *dynamicArr = new int[size];
    inputDynamicArr(dynamicArr, size);
    outputDynamicArr(dynamicArr, size);

    addElement(dynamicArr, size);
    outputDynamicArr(dynamicArr, size);

    delete[] dynamicArr;
    dynamicArr = nullptr;

    return 0;
}