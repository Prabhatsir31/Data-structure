/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/
#include <iostream>
using namespace std;
void display()
{
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
    }
    cout << "\t\t\t\t Enter 1 to add the element :" << endl;
    cout << "\t\t\t\t Enter 2 to insert the element at specific position the element :" << endl;
    cout << "\t\t\t\t Enter 3 to delete the element at specific position the element :" << endl;
    cout << "\t\t\t\t Enter 4 to display the elements in the array:" << endl;
    cout << "\t\t\t\t Enter 5 to shrink the size of the array:" << endl;
    cout << "\t\t\t\t Enter 0 to exit the program :" << endl;
}
void input(int *&arr, int size)
{
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void output(int *&arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
}
void add(int *&arr, int &size)
{
    int num;
    cout << "Enter the element that you want to adde in the end of the array:" << endl;
    cin >> num;
    int *tempArr = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        tempArr[i] = arr[i];
    }
    delete[] arr;
    arr = tempArr;
    arr[size] = num;
    size++;
}
void insert(int *&arr, int &size)
{
    int index;
    int num;
    cout << "Enter the element index that you wnat to enter the number:" << endl;
    cin >> index;
    cout << "Enter the element that you want to add at the " << index << " position :" << endl;
    cin >> num;
    int *tempArr = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        tempArr[i] = arr[i];
    }
    delete[] arr;
    arr = tempArr;
    arr[size] = 0;
    size++;
    for (int i = size - 1; i > index - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index - 1] = num;
}
void remove(int *&arr, int &size)
{
    int num;
    cout << "Enter the element that you want to delete in  the array:" << endl;
    cin >> num;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            for (int j = i; j < size; j++)
                arr[j] = arr[j + 1];
            break;
        }
    }
    int *tempArr = new int[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        tempArr[i] = arr[i];
    }
    delete[] arr;
    arr = tempArr;
    size--;
}
void shrink(int *&arr, int &size)
{
    int num;
    cout << "Enter the number how many index that that you want to shrink from last:" << endl;
    cin >> num;
    if (num <= size)
    {
        int *tempArr = new int[size - num];
        for (int i = 0; i < size - num; i++)
        {
            tempArr[i] = arr[i];
        }
        delete[] arr;
        arr = tempArr;
        size = size - num;
    }
    else
    {
        cout << "The entered number is graeter than the size of the array:" << endl;
    }
}
int main()
{
    int size;
    int n;
    bool flag = false;
    cout << "Enter the size of the array:" << endl;
    cin >> size;
    int *arr = new int[size];
    input(arr, size);
    system("cls");
    do
    {
        display();
        cin >> n;
        switch (n)
        {
        case 1:
        {
            add(arr, size);
            break;
        }
        case 2:
        {
            insert(arr, size);
            break;
        }
        case 3:
        {
            remove(arr, size);
            break;
        }
        case 4:
        {
            output(arr, size);
            break;
        }
        case 5:
        {
            shrink(arr, size);
            break;
        }
        case 0:
        {
            cout << "Quiting............" << endl;
            flag = true;
            break;
        }
        }
    } while (flag == false);
    delete[] arr;
    arr = NULL;
    return 0;
}