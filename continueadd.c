#include<stdio.h>
int sum(int a[5]);
int main()
{
    int a[5];
    printf("\nEnter 5 elements:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=sum;
    printf("\nThe sum is:%d",sum);

}
int sum(int a[5])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    return sum;

}