/* Program to show that changes to the array made inside the function affect the original array */

#include<dtdio.h>
void func(int arr[]);
main()
{
  int i, arr[5] = {3,6,2,7,1};
  func(arr);
  for(i=0; i<5; i++)
    {
      printf("");
    }
}
