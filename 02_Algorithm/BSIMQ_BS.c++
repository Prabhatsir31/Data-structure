#include <iostream>

using namespace std;

void display(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// void bs(int arr[], int s)
// {
//     for (int i = 0; i < s - 1; i++)
//     {
//         for (int j = 0; j < s - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }
// void ss(int arr[], int s)
// {
//     for (int i = 0; i < s - 1; i++)
//     {
//         int mi = i;
//         for (int j = i + 1; j < s; j++)
//         {
//             if (arr[j] < arr[mi])
//             {
//                 mi = j;
//             }
//         }
//         int t = arr[i];
//         arr[i] = arr[mi];
//         arr[mi] = t;
//     }
// }
// void is(int arr[], int s)
// {
//     for (int i = 1; i < s; i++)
//     {
//         int k = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > k)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = k;
//     }
// }
// int l(int arr[], int s)
// {
//     int lg = arr[0];
//     for (int i = 1; i < s; i++)
//     {
//         if (arr[i] > lg)
//         {
//             lg = arr[i];
//         }
//     }
//     return lg;
// }
// int b(int arr[], int l, int r, int s)
// {
//     if (l <= r)
//     {
//         int m = l + (r - l) / 2;
//         if (arr[m] == s)
//             return m;
//         if (s < arr[m])
//             return b(arr, l, m - 1, s);
//         return b(arr, m + 1, r, s);
//     }
//     return -1;
// }

// void mg(int arr[], int l, int m, int r)
// {
//     int n1 = m - l + 1;
//     int n2 = r - m;
//     int L[n1], R[n2];
//     for (int i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];
//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2)
//     {
//         if (L[i] <= R[j])
//         {
//             arr[k] = L[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < n1)
//     {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }
//     while (j < n2)
//     {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void ms(int arr[], int l, int r)
// {
//     if (l >= r)
//         return;
//     int m = l + (r - l) / 2;
//     ms(arr, l, m);
//     ms(arr, m + 1, r);
//     mg(arr, l, m, r);
// }

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int p(int arr[], int l, int r)
{
    int piv = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < piv)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}

void qs(int arr[], int l, int r)
{
    if (l > r)
        return;
    int pi = p(arr, l, r);
    qs(arr, l, pi - 1);
    qs(arr, pi + 1, r);
}

int main()
{
    int arr[] = {2,
                 9,
                 5,
                 1,
                 7,
                 3,
                 0,
                 4,
                 8};
    int s = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorted :\n";
    display(arr, s);
    // bs(arr, s);
    // ss(arr, s);
    // is(arr, s);
    // ms(arr, 0, s - 1);
    qs(arr, 0, s - 1);
    cout << "After sorted :\n";
    display(arr, s);
    // cout << "lg =  : " << l(arr, s) << "\n";

    return 0;
}
