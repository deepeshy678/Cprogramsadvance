#include<stdio.h>
int main()
{
   int a[5],temp,i,j;
   printf("\nEnter 5 elements in the array....");
   for(i=0;i<5;i++)
   scanf("%d",&a[i]);
   for(i=0;i<5;i++)
   {
    for(j=i+1;j<5;j++)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
   
   }
    printf("\nThe 2nd largest element in the array is:%d",a[1]);
    printf("\nThe 2nd largest element in the array is:%d",a[5-2]);

}