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
  index = BinarySearch(arr, size, item);
  if(idex == -1)
    printf("%d not found in array\n", item);
  else
    printf("%d found at position %d\n", item, index);
} /* End of main() */

int BinarySearch(int arr[], int size, int item)
{
  int low=0, up=size-1, mid;
  while(low <= up)
    {
      mid = (low+up)/2;
      if(item > arr[mid])
        low = mid + 1; /* search in right half */
      else if(item < arr[mid]) /* search in left half */
        up = mid + 1;
      else
        return mid;
    }
  return -1;
}
