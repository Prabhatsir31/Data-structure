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
{} /* End of merge_sort */
