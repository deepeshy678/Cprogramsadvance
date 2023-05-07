#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("Enter the size of array=");
    scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("\n Enter element in index [%d]:",i);
    scanf("%d",&num[i]);
  }
for(i=n-1;i>=0;i--)
{
    printf("\n%d\n",num[i]);
}


}