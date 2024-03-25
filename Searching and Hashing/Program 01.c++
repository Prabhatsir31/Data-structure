/* Sequential search in an array */

#include<stdio.h>
#define MAX 50
main()
{
  int i, item, arr[MAX], index;
  printf("Enter the number of elements : ");
  scanf("%d", &n);
  printf("Enter the elements : \n");
  for(i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
    }
  printf("Enter the item to be searched : ");
  scanf("%d", &arr[i]);
  index = LinearSearch(arr, n, item);
  if(index == -1)
    printf("%d not found in array\n", ittem);
  else
    printf("%d found at position %d\n", item, index);
} /* End of main() */
int LinearSearch()
{}
