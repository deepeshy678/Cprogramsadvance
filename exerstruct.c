#include<stdio.h>
int main()
{
  struct emp
  {
    int pid;
    char name[50];
    char address[50];
    int age;
  };
  struct emp dis={440,"Ram Hari Prasad","Birgunj",45};
  printf("PID\tName\t\t\tAddress\t\tAge");
  printf("\n................................................\n");
  printf("%d\t%s\t\t%s\t\t%d",dis.pid,dis.name,dis.address,dis.age);




}