#include<stdio.h>
int main()
{
    int num[100],n,i,po,x;
    printf("Enter the size of array=");
    scanf("%d",&n);
    printf("\n Enter %d element ",n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter [%d] element=",i);
        scanf("%d",&num[i]);
    }
printf("\n Enter the number to insert=");
scanf("%d",&x);

printf("\n Enter the position to insert=");
scanf("%d",&po);

for(i=n-1;i>=po;i--)

    num[i]=num[i+1];
    num[po-1]=x;

for(i=0;i<n;i++)
{
    printf("\n%d\n",num[i]);
}


}