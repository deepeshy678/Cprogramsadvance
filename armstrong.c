#include<stdio.h>
int main()
{
    int num,sum=0,rem,i;
    printf("\nEnter the number:");
    scanf("%d",&num);
    int temp=num;
    for(i=1;num!=0;i++)
    {
        rem=num%10;
        sum+=rem*rem*rem;
        num/=10;
    }
    if(temp==sum)
    {
        printf("\nIt is armstrong number");
    }
    else{
        printf("|nIt isn't armstrong number");
    }
}