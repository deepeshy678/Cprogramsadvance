#include<stdio.h>
#define R 3
#define C 3
int main()
{
    int num1[R][C],i,j;
    printf("\nEnter elements in the matrix.......\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter[%d%d] element:",i,j);
            scanf("%d",&num1[i][j]);
            if(i<j)
            {
                num1[i][j]=0;
            }
        }
    }
    printf("\nThe lower triangular matrix is.......\n");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",num1[i][j]);
            
        }
    }
}