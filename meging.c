#include<stdio.h>
int main()
{
int num[5],hum[5],i,com[10],j;
printf("Enter the 5 elements in 1st array=");
for(i=0;i<5;i++)
{
    scanf("%d",&num[i]);
    
}
printf("\n Enter 5 elements in 2nd array=");
for(i=0;i<5;i++)
{
    scanf("%d",&hum[i]);
   
}
//copying 1st array elements 
for(i=0;i<5;i++)
{
  com[j]=num[i];
  j++;
}
//copying 2nd array elements 
for(i=0;i<5;i++)
{
    com[j]=hum[i];
    j++;
}
printf("\n The new merged elements are =");
for(i=0;i<10;i++)
{
    printf("%d\t",com[i]);
}

}