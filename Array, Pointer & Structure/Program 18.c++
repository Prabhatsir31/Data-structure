/* When an array is passed to a function, the recieving argument is declared as a pointer */

#include<stdio.h>
func(float f[], int *i, char c[5]);
main()
{
  float f_arr[5] = {1,4,2,5,3,7,4,1,5,9};  
  int i_arr[5] = {1,2,3,4,5};
  char c_arr[5] = {'a','b','c','d','e'};
  printf("Inside main():  ");
  printf("Size of f_arr = %u\t", sizeof((f_arr));
  printf("Size of i_arr = %u\t", sizeof((i_arr));
  printf("Size of c_arr = %u\t", sizeof((c_arr));
  printff("");
}
