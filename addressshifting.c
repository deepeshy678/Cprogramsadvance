#include<stdio.h>
int main()
{
    int a[5];
    printf("\nEnter the elements in the array:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int *m[5];
    for(int i=0;i<5;i++)
    {
        m[i]=&a[i];
    }
    printf("\nThe elements are:");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",*m[i]);
    }
    
   
    
}