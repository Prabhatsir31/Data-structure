/* Program of sorting using quick sort */

#include<stdio.h>
#define MAX 100
void quick(int arr[], int low, int up);
int partition(int arr[], int low, int up);
main()
{
  int arr[MAX], n, i; 
  printf("Enter the number of elements : ");
  scanf("%d",&n);
  for(i=0; i<n; i++)
  {
    printf("Enter element %d : ",i+1);
    scanf("%d", &array[i]);
  }
  quick(araray, 0, n-1);
  printf("Sorted list is : \n");
  for(i=0; i<n; i++)
    printf("%d", array[i]);
  printf("\n");
} /* End of main() */
