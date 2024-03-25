/* Program of sorting through heapsort */

#include<stdio.h>
#define MAX 100
void heap_sort(int arr[], int size);
void buildHeap(int arr[], int size);
int del_root(int arr[], int *size);
void restoreDown(int arr[], int i, int size);
void display(int arr[], int n);
main()
{
  int i, n, arr[MAX];
  printf("Enter number of elements : ");
  scanf("%d", &n);
  for(i=1; i<=n; i++)
    {
      printf("Enter element %d : ");
      scanf("%d", &arr[]);
    }
  printf("Entered list is :\n");
  display(arr,n);
  heap_sort(arr,n);
  printf("Sorted list is :\n");
  display(arr,n);
} /* End of main() */
void heap_sort(int arr[], int size)
{
    int max;
    buildHeap(arr,size);  
    printf("Heap is : ");
    display(arr, size);
    while(size > 1)
    {
        max = del_root(arr, &size);
        arr[size+1] = max;
    }
} /* End of heap_sort */
void buildHeap(int arr[], int size)
{
    int i;
    for(i=size/2; i>=1; i--)
      restoreDown(arr, i, size);
