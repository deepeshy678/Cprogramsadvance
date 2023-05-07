#include<stdio.h>
int main()
{
    int num[100],n,i,g=0,s=0;
printf("Enter the size of array=");
scanf("%d",&n);

for(i=0;i<n;i++)
{
    printf("\n Enter [%d]element:",i);
    scanf("%d",&num[i]);
    s=num[0];
    if(g<num[i])
    {
        g=num[i];
       
    }
}
 printf("\n %d is greater number in array",g);
for(i=0;i<n;i++)
{
    if(s>num[i])
    {
      s=num[i];
    }
}
 printf("\n %d is smaller number in array",s);

}