#include<stdio.h>
int arr(int a[5]);
int main()
{
    int a[5],result;
    printf("\nEnter the value in array:");
    for(int i=0;i<5;i++)
    {
        printf("\nEnter [%d] element:",i);
        scanf("%d",&a[i]);

    }
 result=arr(a);
 for(int i=0;i<5;i++)
 {
printf("\n%d",a[i]);
 }
    
}
int arr(int a[5])
{
    for(int i=0;i<5;i++)
    {
        return a[i];
    }
}