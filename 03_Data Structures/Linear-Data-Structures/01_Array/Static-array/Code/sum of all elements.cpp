/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/

#include<iostream>
    using namespace std;
    int main()
    {
        const int size=10;
        int arr[size];
        int sum=0;
        cout<<"Enter the numbers:"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        cout<<"The sum of all the elements in the array = "<<sum<<endl;


        return 0;
    }
