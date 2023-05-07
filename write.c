#include<stdio.h>
int main()
{
    int a[3][5]={ {-3,7,5,-2,8}, {2,5,8,3,-4}, {-6,9,3,6,5}};
    int i,j;
    for(i = 0;i < 3; i++)
    {
        printf("\n");
        for(j = 0;j < 5; j++);
        {
            printf("%d\t",a[i][j] );
        }
    }
}