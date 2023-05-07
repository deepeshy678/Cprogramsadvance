#include<stdio.h>
int  ram(int a);
int main()
{ 
    int a;
    printf("Enter the  number to check:");
    scanf("%d",&a);
   int s;
   s=ram(a);
   if(s==1)
   {
      printf("\n%d is prime number",a);
   }
   else
   {
       printf("\n %d is not prime number",a);
   }
   
    


}
int  ram(int a)
{
    
    int count=0,i;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count ++;
        }
    }
    if(count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
   
}