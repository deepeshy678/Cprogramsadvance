#include<stdio.h>
void aau(int *p, int *q);
int main()
{
    int a=5,b=10,n;
    aau(&a,&b);
    

}
void aau(int *p, int *q)
{
   int n=*p+10;
   int m=*q+15;

   printf("\nThe value of n is %d",n);
   printf("\nThe value of m is %d",m);

}