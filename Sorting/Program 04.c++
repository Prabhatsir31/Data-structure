/* Program of sorting using shell sort */

#include<stdio.h>
#efine MAX 100
main()
{
  int arr[MAX], i, j, k, n, incr;
  printf("Enter the number of elements : ");
  scanf("%d", &n);
  for(i=0; i<n; i++)
    {
      printf("Enter element % : ", i+1);
      scanf("%d", &arr[i]);
    }
  printf("\nEnter maximum increment (odd value) : ");
  scanf("%d", &incr);

  /* Shell sort */
while(incr >= 1)
  {
    for(i=incr; i<n; i++)
      {
        k = arr[i];
        for(j=i-incr; j>=0 && k<arr[j]; j=j-incr)
          arr[j+incr] = arr[j];
        arr[j+incr] = k;
      }
    incr = incr-2; /* Decrease the increment */
  } /* End of while() */
  printf("Sorted list is :\n");
  for(i=0; i<n; i++)
    printf("%d", arr[i]);
  printf("\n");
} /* End of main() */
