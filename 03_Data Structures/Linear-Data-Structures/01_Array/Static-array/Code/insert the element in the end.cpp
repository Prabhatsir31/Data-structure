/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/

#include<iostream>
    #include<cstdlib>
    #include<ctime>
    using namespace std;
    int  main()
    {
      const int size=11;
      int arr[size];
      int num;
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
      for(int i=0;i<size;i++){
          if(i==10)
          {
              arr[i]=num;
          }
          cout<<arr[i]<<" ";
      }
      return 0;
    }
