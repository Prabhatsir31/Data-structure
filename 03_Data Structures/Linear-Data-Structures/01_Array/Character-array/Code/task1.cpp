// Author: Muhib Arshad (@muhib7353 everywhere)
// Date and Time: 2 October , 20222  14:55:00
// Question : FAST University Lab4 (OOP) : Instructor=> Mam Abeeda

/*
Write a program that will read monthly sales into a dynamically allocated array. The program will input the size of the array from the user. It will call a function that will find the yearly sum (the sum of all the sales). It will also call another function that will find the average. Then it calls a display function that will display the total sales for the year and average monthly sale.

*/

#include <iostream>

using namespace std;

int yearSum(const int *arr, const int &size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int average(const int *arr, const int &size)
{
    return yearSum(arr, size) / size;
}
void display(const int *arr, const int &size)
{
    cout << "The elements in the array :\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void input(int *arr, const int &size)
{
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    input(arr,size);
    cout << "The averag of the monthly sales :" << average(arr, size) << "\n";
    cout << "The averag of the monthly sales :" << yearSum(arr, size) << "\n";
    display(arr,size);
  
    delete[] arr;
    arr=nullptr;
    return 0;
}
