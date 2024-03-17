/* Call by value */

#include<stdio.h>
void value(int x, int y);
main()
{
  int a=5, b=8;
  printf("Before calling the function, a = %d and b = %d\n ", a,b);
  value(a,b);
  printf("After ");
}
