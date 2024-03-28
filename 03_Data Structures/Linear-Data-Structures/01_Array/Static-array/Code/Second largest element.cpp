/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/

#include<iostream>
    #include<cstdlib>
    #include<ctime>
    using namespace std;
    int  main()
    {
      const int size=10;
      int arr[size];
      int firstMax;
      int secondMax;
      int x=time(0);
      srand(x);
      for(int i=0;i<size;i++){
          arr[i]=(rand()%10)+1;
      }
      for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
      }
      firstMax=arr[0];
      secondMax=arr[0];
      for(int i=0;i<size;i++){
        if(firstMax<arr[i])
        {
            firstMax=arr[i];
        }
      }
      for(int i=0;i<size;i++){
          if(arr[i]==firstMax)
          {
              continue;
          }
          else
          {
              if(secondMax<arr[i])
              {
                  secondMax=arr[i];
              }
          }
      }
      cout<<"The second largest element in the array = "<<secondMax<<endl;

        return 0;
    }
    /*legal way is that firstly you sort the array and then find the 2nd largest and 2nd smallest by
    by the index print 2nd */
