/* Program to understand how a array to structures is sent from a function */

#include<stdio.h>
struct student
{
  char name[20];
  int rollno;
  int marks;
};
void display(struct student);
void dec_marks(struct student stuarr[]);
main()
{
  
}

void dec_marks(struct student stuarr[])
{
  int i;
  for(i=0; i<3; i++)
    {
      stuarr[i].marks = stuarr[i].marks-10;
    }
}
