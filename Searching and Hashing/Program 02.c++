/* Binary search in an array */

#include<stdio.h>
#define MAX 50
main()
{
  int i, size, item, arr[MAX], index;
  printf("Enter the number of elements : ");
  scanf("%d", &size);
  printf("Enter the elements (in sorted order) :  \n");
  for(i=0; i<size; i++)
    scanf("%d", &arr[i]);
  printf("Enter the item to be searched : ");
  scanf("%d", &item);
  
} /* End of main() */
