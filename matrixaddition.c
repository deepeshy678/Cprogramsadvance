#include<stdio.h>

int main()
{
int num[20][20],hum[20][20],sum[20][20],i,j,n,m;
printf("For first matrix.....\n");
printf("Enter the size row :");
scanf("%d",&m);
printf("\n Enter the size of column:");
scanf("%d",&n);

for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("\n Enter [%d%d] element:",i,j);
        scanf("%d",&num[i][j]);
    }
}
printf("For second matrix.....\n");
printf("Enter the size row :");
scanf("%d",&m);
printf("\n Enter the size of column:");
scanf("%d",&n);
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("\n Enter [%d%d] element:",i,j);
        scanf("%d",&hum[i][j]);
    }
}

printf("\n The 1st matrix :");
for(i=0;i<m;i++)
{
    printf("\n");
    for(j=0;j<n;j++)
    {
        printf("%d \t",num[i][j]);
    }
}
printf("\n The 2nd matrix :");
for(i=0;i<m;i++)
{
    printf("\n");
    for(j=0;j<n;j++)
    {
        printf("%d \t",hum[i][j]);
    }
}
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
      sum[i][j]=num[i][j]+hum[i][j]; 
    }
}
printf("\nSum of these two matrices:\n");
for(i=0;i<m;i++)
{
    printf("\n");
    for(j=0;j<n;j++)
    {
    printf("%d\t",sum[i][j]);
    }
}




  
}