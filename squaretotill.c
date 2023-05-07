#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the number :");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        printf("\nSquare of %d :%d",i,i*i);
        sum=sum+i*i;
    }
    printf("\n Sum of these squares:%d",sum);
}