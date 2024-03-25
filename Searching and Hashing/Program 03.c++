/* Linear probing */

#include<stdio.h>
#define MAX 50
enum type_of_record (EMPTY, DELETED, OCCUPIED);
struct employee
{
  int empid;
  char name[20];
  int age;
};
struct Record
{
  struct employee info;
enum type_of_record status;
}
