/* Program to understand arrays structures */

#include<stdio.h>
struct student 
{
  char name[20];
  int rollno;
  float submarks[4];
};
main()
{
  int i,j;
  struct student stuarr[3];
  for(i=0; i<3; i++)
    {
      printf("Enter data for student %d\n", i+1);
      printf("Enter name : ");
      scanf("%s", stuarr[i].name);
      printf("Enter rollno : ");
      scanf("%d", stuarr[i].rollno);
      for(j=0; j<4; j++)
        {
          printf("Enter marks for student %d : ", j+1);
          scanf("%d", &stuarr[i].submarks[j]);
        }
    }
  for(i=0; i<3; i++)
    {
      printf("Data of student %d\n", i+1);
      printf("Name %s, Roll number : %d\n Marks:", stuarr[i].name, stuarr[i].rollno);
      for(i=0; i<4; i++)
        {
          printf("%d    ", stuarr[i].submarks[j]);
        }
      printf("\n");
    }
}
