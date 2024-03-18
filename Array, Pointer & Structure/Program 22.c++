/* Program to display the value of structure members */

#include<stdio.h>
#include<stdlib.h>
struct student 
{
  char name[20];
  int rollno;
  float marks;
};
main()
{
  struct student stu1 = {"Mary", 25,68};
  struct student stu2, stu3;
  strcpy(stu2.name,"John");
  stu2.rollno = 26;
  stu2.marks = 98;
  
}
