/* Program to pass array element to a function */

#include<stdio.h>
void check(int num);
main()
{
  int arr[10], i;
  printf("Enter the array elements : ");
  for(i=0; i<10; i++)
    {
      scanf("%d", &arr[i]);
      check(arr[i]);
    }
}
void check(int num)
{
  
}
