#include<stdio.h>

struct emp
{
    char name[20];
    int age;
    float salary;
};
int main()
{
 struct emp e[20];
 int i;
 printf("Enter the required details....\n");
 for(i=0;i<5;i++)
 {
    printf("\nEnter details of %d employee",i+1);
    printf("\nName");
    scanf("%s",e[i].name);
    printf("\nAge");
    scanf("%d",&e[i].age);
    printf("\nSalary");
    scanf("%f",&e[i].salary);
 }
 //Display the records
 for(i=0;i<5;i++)
 {
    if(e[i].salary>20000)
    {
        printf("\n%s\n",e[i].name);
        printf("Age:\n%d\n",e[i].age);
        printf("Salary:\n%f\n",e[i].salary);
    }
 }
}