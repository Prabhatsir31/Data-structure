/*Author :@haiderali780

Time:28 Jan,2022 _6:01
*/
#include<iostream>
    using namespace std;
    int main()
    {

      const int size=10;
      int arr[size];
      int freq[size]={0};//Initailize the whole array of frequency with zero
      int count;
      cout<<"Enter the elements of the array :"<<endl;
      for(int i=0;i<size;i++){
          cin>>arr[i];
      }
      cout<<"The elements that you want to be enter = "<<endl;
      for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
      }
      cout<<"The frequency of each element = "<<endl;
      //outer loop controls the number index that frequenct can be counted
      for(int i=0;i<size;i++ ){
          count=1;//intitalize to 1 beacuse every number must have a minimum frequency of 1
          for(int j=i+1;j<=size;j++)//inner loop starts from the i+1 to campare it with nrext index element
          {
               if(arr[i]==arr[j])//comparsion
               {
                   count++;
                   freq[j]=-1;//this is very imporatnt concpet that if number repeats than it iniliathe the next index of freq with -1
                   //to not repeat the it
               }
          }
          if(freq[i]!=-1)//if index is not equal to -1 than its value of freq is equal to the count
          {
              freq[i]=count;
          }
      }
      for(int i=0;i<size;i++)
      {
          //if eveery those index of freq that have not the -1 repeated index we just printed only these values
          if(freq[i]!=-1)
          {
              cout<<"The number "<<arr[i]<<" has  frequency of "<<freq[i]<<endl;
          }
      }

        return 0;
    }
