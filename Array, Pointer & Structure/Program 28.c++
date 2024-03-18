/* Program to understand how a structure variable is sent to a function */

#include<stdlib.h>
struct student
{
  char name[20];
  int rollno;
  int marks;
};
void display(struct student);
main()
{
  struct student stu1 = {"John", 12,87};
  struct student stu1 = {"Mary", 18,90};
  display(stu1);
  display(stu2);
}
void display(struct student stu1);
{
  printf("Name -  %s\t",name);
  printf("Rollno -  %d\t",rollno);
  printf("Marks -  %d\t",marks);
}
