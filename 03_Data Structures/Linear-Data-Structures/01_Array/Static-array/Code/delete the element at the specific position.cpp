/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/

#include<iostream>
    #include<cstdlib>
    #include<ctime>
    using namespace std;
    int main()
    {
      const int size=10;
      int arr[size];
      int num;
      int pos;
      int x=time(0);
      srand(x);
      for(int i=0;i<size;i++){
          arr[i]=(rand()%10)+1;
      }
      for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
      }
      cout<<endl;
      cout<<"Enter the specific position that you want to delete :"<<endl;
      cin>>pos;
      for(int i=pos-1;i<size-1;i++){
          arr[i]=arr[i+1];
      }
      cout<<"The deleted array = "<<endl;
      for(int i=0;i<size-1;i++)
      {
          cout<<arr[i]<<" ";
      }

      return 0;
    }
