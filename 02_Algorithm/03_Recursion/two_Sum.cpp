/*Algorithum for the :
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.


Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?*/
#include <iostream>
using namespace std;

class sumAlgo
{
    int size;
    int Target;
    int *arr;
    int resArr[2]{-1, -1};

public:
    sumAlgo() : size(0), Target(0)
    {
        arr = new int[size]{0};
        menu();
    }
    void setSize()
    {
        cout << "Enter the size of the array :\n";
        cin >> size;
    }
    void setArray()
    {
        if (size > 0)
        {
            cout << "Enter the " << size << " Elements int the array:\n";
            for (int i = 0; i < size; i++)
                cin >> arr[i];
        }
    }
    void menu()
    {
        setSize();
        setArray();
        setTarget();
        getArray();
        breakArr(arr, 0, size - 1);
        sumIndices();
    }
    void setTarget()
    {
        cout << "Enter the target Element:\n";
        cin >> Target;
    }
    void getArray()
    {
        if (size > 0)
            cout << "The Elements in the array:\n";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    void sumRA(int A[], int l, int lplus)
    {
        int m = A[l] + A[lplus];
        if (m == Target)
        {
            resArr[0] = l;
            resArr[1] = lplus;
        }
    }
    void breakArr(int A[], int l, int r)
    {
        if (l == r)
            return;
        int m = l + 1;
        breakArr(A, m, r);
        sumRA(A, l, l + 1);
    }
    void sumIndices()
    {
        cout << "Sum indices are [" << resArr[0] << "," << resArr[1] << "]\n";
    }
    ~sumAlgo()
    {
        delete[] arr;
    }
};
int main()
{
    sumAlgo();
    return 0;
}
