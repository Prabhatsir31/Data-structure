/* Program of sorting using merge sort through recursion */

#include<stdio.h>
#efine MAX 100
void merge_sort(int arr[], int low, int up);
void merge(int arr[], int temp[], int low1, int up1, int low2, int up2);
void copy(int arr[], int temp[], int low, int up);
main()
{
  int i, n, arr[MAX];
  printf("Enter the number of elements : ");
  scanf("%d", &n);
  for(i=0; i<n; i++)
    {
      printf("Enter element %d : ", i+1);
      scanf("%d", &arr[i]);
    }
  merge_sort(arr, 0, n-1);
  printf("\nSorted list is : \n");
  for(i=0; i<n; i++)
    printf("%d", arr[i]);
} /* End of main() */

void merge_sort(int arr[], int low, int up)
{
  int mid;  
  int temp[MAX];
  if(low<up) /* if more than one element */
  {
    mid = (lower + up) / 2;
    merge_sort(arr, low, mid); /* sort arr[low:mid] */
    merge_sort(arr, mid+1, up); /* sort arr[mid+1, up] */
    /* Merge arr[low:mid] and arr[mid+1:up] to temp[low:up] */
    merge(arr, temp, low, mid, mid+1, up);
    copy(arr, temp, low, up); /* copy temp[low:up] to arr[low:up] */
  }
} /* End of merge_sort */











