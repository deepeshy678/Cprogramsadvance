#include<stdio.h>
int main()
{
    int a[4][4],i,j;
    printf("\nEnter elements..........\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\nEnter [%d%d] element:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe actual matrix is..........\n");
    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    for(i=1;i<4;i++)
    for(j=0;j<i;j++)
    a[i][j]=0;
    printf("\nThe upper triangular matrix is.........\n");
    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    
}