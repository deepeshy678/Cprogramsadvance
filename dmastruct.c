#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    int roll;
    float per;
};
int main()
{
    int size;
    printf("Enter the number of students......\n");
    scanf("%d",&size);
    struct student *detail=(struct student *)malloc(size*sizeof(struct student));
    if(detail==NULL)
    {
        printf("\nMemory space not available....\n");
        exit(1);
    }
    for(int i=0;i<size;i++)
    {
      printf("Enter the details of %d student.....\n",i+1);
      printf("Name Roll No. Percentage :");
      scanf("%s %d %f",(detail+i)->name,&(detail+i)->roll,&(detail+i)->per);
    }
    printf("\nThe details of %d students are.....\n",size);
    printf("Name\t\t Roll No.\tPercentage\n");
    for(int i=0;i<size;i++)
    {
      
      
      printf("%s\t\t%d\t\t%f\n",(detail+i)->name,(detail+i)->roll,(detail+i)->per);
    }
    
}