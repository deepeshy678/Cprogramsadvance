#include<stdio.h>
int main()
{
int arr[5][5],i,j;
printf("\nEnter 5 elements in array:");
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
           printf("\nEnter [%d%d] element:",i,j);
           scanf("%d",&arr[i][j]);
    }

}
printf("\nThe elements are:\n");
for(i=0;i<2;i++)
{
    printf("\n");
    for(j=0;j<2;j++)
    {
      printf("%d\t",arr[i][j]);
    }

}

}

