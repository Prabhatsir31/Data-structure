#include <iostream>
using namespace std;

class LRArr
{
    int size;
    int *arr;
    int k;

public:
    LRArr()
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
    void leftRotate()
    {
        int *temp = new int[size];
        for (int i = 0; i < size; i++)
            temp[i] = arr[i];
        int count = 0;
        while (count < k)
        {
            int toRotate = temp[0];
            for (int j = 0; j < size - 1; j++)
            {
                temp[j] = temp[j + 1];
            }
            temp[size - 1] = toRotate;
            count++;
        }
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
            cout << "Enter less than " << size << " time to rotate the array : \n";
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
    ~LRArr()
    {
        delete[] arr;
    }
};

int main()
{
    LRArr arr;
    return 0;
}
