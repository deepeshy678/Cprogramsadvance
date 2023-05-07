#include<stdio.h>
int  sum();
int main()
{
    int p;
    p=sum();
    printf("\nThe sum of digits :%d",p);

}
int sum()
{
    int num,sum=0,rem;
    printf("\nEnter the number:");
    scanf("%d",&num);
    

    while (num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    return sum;

    
}