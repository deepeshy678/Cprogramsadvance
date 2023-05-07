#include<stdio.h>
int main()
{
    int num[5],i,x,p;
    printf("Enter 5 numbers in the array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\n Enter the number to insert=");
    scanf("%d",&x);
    printf("\n Enter the position to insert=");
    scanf("%d",&p);

for(i=5;i<=p;i--)
{
    num[i]=num[i-1];
    num[p]=x;
}
printf("\n The merge elements are =");
for(i=0;i<5;i++)
{
    printf("%d\t",num[p]);
}

}