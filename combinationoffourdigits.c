#include<stdio.h>
int main()
{
    int i,j,k,l,count=0;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            for(k=0;k<=9;k++)
            {
                for(l=0;l<=9;l++)
                {
                    printf("%d%d%d%d\n",i,j,k,l);
                    count++;
                }
            }
        }
    }
    printf("\nThe total number is %d",count);
}