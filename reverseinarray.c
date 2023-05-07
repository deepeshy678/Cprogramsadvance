#include<stdio.h>
int rev(int a);
int main()
{
    int a,result;
    printf("\nEnter the number:");
    scanf("%d",&a);

    result=rev(a);
printf("\nThe reverse number is:%d",result);
}
int rev(int a)
{
    int rev=0,rem,i;
    for(i=1;a!=0;i++)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    return rev;
}