
/*Write a C++ program to insert the element at the specific position(index) in the one dimensional dyanmic array
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
    cout<<endl;
}

void insertElement(int *&arr, int &size)
{
    int index;
    int elementAdd;
    cout << "Enter the position where you want to add the element : " << endl;
    cin >> index;
    index--;
    cout << "Enter the element that you want to add :" << endl;
    cin >> elementAdd;

    // changing size of the array
    int *temp = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
    size++;

    // shifting the array ->adding element
    for (int i = size - 1; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = elementAdd;
    cout<<endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array:" << endl;
    cin>>size;

    int *dynamicArr = new int[size];
    inputDynamicArr(dynamicArr, size);
    outputDynamicArr(dynamicArr, size);

    insertElement(dynamicArr, size);
    outputDynamicArr(dynamicArr, size);

    delete[] dynamicArr;
    dynamicArr=nullptr;

    return 0;
}