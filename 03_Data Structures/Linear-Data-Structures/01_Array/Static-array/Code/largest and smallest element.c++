/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/
#include<iostream>
    using namespace std;
    int main()
    {
        const int size=4;
        int arr[size];
        int max;
        int min;
        cout<<"Enter the numbers:"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
         max=arr[0];
         min=arr[0];
        for(int i=0;i<size;i++){
             if(max<arr[i])
             {
                 max=arr[i];
             }
             if(min>arr[i])
             {
                 min=arr[i];
             }
        }
        cout<<"The maximum between these numbers = "<<max<<endl;
        cout<<"The minimum between these numbers = "<<min<<endl;
        return 0;
    }
