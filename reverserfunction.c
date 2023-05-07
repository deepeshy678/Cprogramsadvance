#include<stdio.h>
void rev();
int main()
{
rev();
}
void rev()
{
    int a,rem,rev=0;
    printf("\nEnter the number:");
    scanf("%d",&a);
    do
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    } while (a!=0);
    printf("\nReverse of this number:%d",rev);
    
}