/* Program to show that changes to the array made inside the function affect the original array */

#include<dtdio.h>
void func(int a[]);
main()
{
  int i, arr[5] = {3,6,2,7,1};
  func(arr);
  for(i=0; i<5; i++)
    {
      printf("%d  ", arr);
    }
  printf("\n");
}
void func(int a[])
{
  int i;
  printf("Inside func()  :");
  func(i=0; i<5; i++)
  {
    a[i] = a[i] + 2;
    printf("");
  }
}
