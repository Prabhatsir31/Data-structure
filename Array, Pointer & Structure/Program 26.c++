/* Program to understand pointers to structures */

#include<stdio.h>
struct student
{
  char marks[20];
  int rollno;
  int marks;
};
main()
{
  struct student stu = {"Mary", 25, 68};
  struct student *ptr = &stu;
  printf("Name - %s\t", ptr->name);
  printf("Rollno - %d\t", ptr->rollno);
  printf("Marks - %d\t", ptr->marks);
}
