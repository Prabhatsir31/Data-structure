/* CAll by reference */

#include<stdio.h>
void ref(int *p, int *q);
main()
{
  int a=5;
  int b=8;
  printf("Before calling the function, a = %d and b = %d\n ", a,b);
  ref(&a, &b);
  
}
