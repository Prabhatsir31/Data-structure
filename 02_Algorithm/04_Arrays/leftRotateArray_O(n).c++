#include <iostream>
using namespace std;

class LRArr_By_ReverseAlgo
{
    int size;
    int *arr;
    int k;

public:
    LRArr_By_ReverseAlgo()
    {
        size = 0;
        arr = nullptr;
        k = 0;
        menu();
    }
    void create()
    {
        arr = new int[size];
        set();
    }
    void set()
    {
        cout << "Enter " << size << " : elements:\n";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    void get()
    {
        cout << "Array : \n";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i];
        }
        cout << "\n";
    }
    void reverse(int arr[], int l, int r)
    {
        while (l < r)
        {
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
    }
    void leftRotate()
    {
        int c = k % size;
        int *temp = new int[size];
        for (int i = 0; i < size; i++)
            temp[i] = arr[i];
        reverse(temp, 0, c - 1);
        reverse(temp, c, size - 1);
        reverse(temp, 0, size - 1);
        cout << "Rotated Array : \n";
        for (int i = 0; i < size; i++)
        {
            cout << temp[i];
        }
        cout << "\n";
        delete[] temp;
    }
    void menu()
    {
        cout << "Enter size: \n";
        cin >> size;
        create();
        get();
        while (k != -1)
        {
            cout << "Enter nth number time to rotate the array : \n";
            cout << "Enter -1 to terminate:\n";
            cin >> k;
            while (k < -1)
            {
                cout << "Invalid Input !\n";
                cout << "Renter :\n";
                cin >> k;
            }
            if (k != -1)
                leftRotate();
        }
    }
    ~LRArr_By_ReverseAlgo()
    {
        delete[] arr;
    }
};

int main()
{
    LRArr_By_ReverseAlgo arr;
    return 0;
}
