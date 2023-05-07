#include<stdio.h>
int main()
{
   int num[100],n,i,po;
   printf("Enter the size of array=");
   scanf("%d",&n);

   printf("\n Enter %d elements in array:",n);
   for(i=0;i<n;i++)
   {
    printf("\n Enter [%d]:",i);
    scanf("%d",&num[i]);
   } 

printf("\n Enter the position to delete the element=");
scanf("%d",&po);

for(i=po-1;i<n;i++)
{
    num[i]=num[i+1];
}

for(i=0;i<n-1;i++)
{
    printf("\n [%d] element=",i);
    printf("%d",num[i]);
}

}