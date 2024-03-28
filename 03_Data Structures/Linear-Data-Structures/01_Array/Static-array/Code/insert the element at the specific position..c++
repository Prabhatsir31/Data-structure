/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/

#include<iostream>
    #include<cstdlib>
    #include<ctime>
    using namespace std;
    int main()
    {
      const int size=11;
      int arr[size];
      int num;
      int pos;
      int x=time(0);
      srand(x);
      for(int i=0;i<10;i++){
          arr[i]=(rand()%10)+1;
      }
      for(int i=0;i<10;i++){
          cout<<arr[i]<<" ";
      }
      cout<<endl;
      cout<<"Enter the element that you want to be insert :"<<endl;
      cin>>num;
      cout<<"Enter the specific position that you want to insert :"<<endl;
      cin>>pos;
      for(int i=size;i>pos-2;i--){
         arr[i]=arr[i-1];
        if(i==pos-1)
          {
              arr[i]=num;
          }
      }
      cout<<"The inserted array at the specific position = "<<endl;
      for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
      }
        return 0;
    }
