#include<stdio.h>
void odd(int a[]);
int main()
{
    int x[5];
    printf("\nEnter 5 elements:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    odd(x);

}
void odd(int a[])
{
    printf("\nOdd numbers are:");
    for(int i=0;i<5;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%d\t",a[i]);
        }
    }

}