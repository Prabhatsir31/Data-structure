/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/

#include<iostream>
    #include<cstdlib>
    #include<ctime>
    using namespace std;
    int main()
    {  int x=time(0);
        srand(x);
        const int size=100;
        int arr[size]={};
         int max=arr[0];
         int min;
        for(int i=0;i<10;i++){
            arr[i]=(rand()%100)+1;
        }
        for(int i=0;i<10;i++){
            cout<<arr[i]<<" ";
        }}
