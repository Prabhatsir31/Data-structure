/* Program to understand dynamic of integers to be entered */

#include<stdio.h>
#include<stdlib.h>
main()
{
  int *p, n, i;
  printf("Enter the number of intergers to be entered :  ");
  scanf("%d", &n);
  p = (int *)malloc(n*sizeof(int));
  if(p==NULL)
  {
    printf("Memory not available\n");
    exit(1);
  }
  for(i=0; i<n; i++)
    {
      
    }
}
