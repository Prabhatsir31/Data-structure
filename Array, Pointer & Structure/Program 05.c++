/* Program to pass an array to a function */

#include<stdio.h>
void func(int val[]);
main()
{
  int i, arr[6] = {1,2,3,4,5,6};
  func(arr);
  printf("Contents of array are now : ");
  for(i=0; i<6; i++)
    {
      printf("%d", arr[i]);
    }
  printf("\n");
}
void func(int val[])
{
  
}
