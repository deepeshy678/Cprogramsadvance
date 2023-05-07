#include<stdio.h>
void sub(int a,int b);
int main()
{
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
sub(a,b);
}
void sub(a,b)
{
    int sub;
 sub=a-b;
    printf("\nThe subtraction is:%d",sub);
}