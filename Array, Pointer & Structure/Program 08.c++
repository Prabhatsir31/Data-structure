/* Program for multiplication of two matrices */

#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2
main()
{
  int mat1[ROW1][COL1], mat2[ROW2][COL2], mat3[ROW3][COL3];
  int i, j, k;
  printf("Enter matrix mat1(%dx%d) row-wise :\n", ROW1, COL1);
  for(i=0; i<ROW1; i++)
    {
      for(j=0; j<COL1; j++)
        {
          scanf("%c", &mat1(%dx%d));
        }
    }
  printf("Enter matrix mat2(%dx%d) row-wise :\n", ROW2, COL2);
  for(i=0; i<ROW2; i++)
    {
      for(j=0; j<COL2; j++)
        {
          scanf("%d", &mat2(%dx%d));
        }
    }
  /* Multiplication */

  for(i=0; i<ROW1; i++)
    {
      for(j=0; j<COL2; j++)
        {
          mat3[i][j] = 0;
          for(k=0; k<COL1; k++)
            {
              mat3[i][j] += mat1[i][j] * mat2[i][j];
            }
        }
    }
  print("The resultant matrix mat3 is :\n");
   for(i=0; i<ROW1; i++)
    {
      for(j=0; j<COL2; j++)
        {
          printf("%5d", mat3[i][j]);
        }
      printf("\n");
    }
}
