/* Program to show a function that returns pointer */

#include<stdio.h>
int *fun(int *p, int n);
main()
{
  int arr[10] = {1,2,3,4,5,6,7,8,9,10}, n, *ptr;
  n=5;
  ptr = fun(arr, n);
}
