/* Program for addition of two matrices */

#define ROW 3
#define COL 4
#include<stdio.h>
main()
{
  int i, j, mat1[ROW][COL], mat2[ROW][COL], mat3[ROW][COL];
  printf("Enter matrix mat1(%dx%d) row-wise :\n", ROW, COL);
  for(i=0; i<ROW; i++)
    {
      for(j=0; j<COL; j++)
        {
          scanf("%d", &mat1(%dx%d));
        }
    }
  printf("Enter matrix mat2(%dx%d) row-wise :\n", ROW, COL);
  for(i=0; i<ROW; i++)
    {
      for(j=0; j<COL; j++)
        {
          scanf("%d", &mat2(%dx%d));
        }
    }
  /* Addition */

  for(i=0; i<ROW; i++)
    {
      for(j=0; j<COL; j++)
        {
          mat3[i][j] = mat1[i][j]  + mat2[i][j];
        }
    }
  print("");
}





