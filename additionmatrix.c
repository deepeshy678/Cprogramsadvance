#include<stdio.h>
int main()
{
    int num[5],hum[5],sum[5],m,n,i,j;

printf("\n Enter 5 elements in 1st matrix:");

for(i=0;i<=5;i++)
{
    printf("\n Enter at [%d] index:",i);
    scanf("%d",&num[i]);
}

printf("\n Enter 5 elements in 2nd matrix:");
for(j=0;j<=5;j++)
{
    printf("\n Enter at [%d] index:",i);
    scanf("%d",&hum[j]);
}
printf("\n The sum of these two matrices are:");
for(i=0;i<=5;i++)
{
    for(j=0;j<=5;j++)
    {
sum[5]=num[i]+hum[j];

printf("\n %d \t",sum[5]);
    }
    printf("\n");
}




}