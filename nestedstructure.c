#include<stdio.h>

struct student
{
    char name[20];
    struct
    {
        int day;
        int month;
        int year;
    }dob;
   int id;
};
int main(void)
{
    struct student fill;
    printf("Enter name of the student:");
    scanf("%s",fill.name);
    printf("\nEnter ID :");
    scanf("%d",&fill.id);
    //Nested structure
    printf("\nFor Date Of Birth");
    printf("\nEnter Day:");
    scanf("%d",&fill.dob.day);
    printf("\nEnter month:");
    scanf("%d",&fill.dob.month);
    printf("\nEnter year:");
    scanf("%d",&fill.dob.year);

    printf("\nThe details are..........\n");
    printf("Name\t\tID\tDay\tMonth\tYear\n");
    printf("%s\t\t%d\t%d\t%d\t%d",fill.name,fill.id,fill.dob.day,fill.dob.month,fill.dob.year);
}